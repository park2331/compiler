/*	$Id: lexer.l,v 1.2 1997/11/19 15:13:15 sandro Exp $	*/

/*
 * Copyright (c) 1997 Sandro Sigala <ssigala@globalnet.it>.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 * ISO C++ lexical analyzer.
 *
 * Based on the ISO C++ draft standard of December '96.
 */

%{
#include <ctype.h>
#include <stdio.h>

#include "120gram.tab.h"
#include "token.h"
#include "tlist.h"
#include "tree.h"

int lineno;

static void skip_until_eol(void);
static void skip_comment(void);
static int check_identifier(char *);

int typenametable_insert(char*, int);

/* extern */
extern int yychar;
extern FILE *yyin;
extern nodeptr filestack;
extern YYSTYPE yylval;

/* Global variables */
tokenptr yytoken;
int errors = 0;

/* #include flags */
int ctime = 0;
int iostream = 0;
int iomanip = 0;
int cmath = 0;
int cstdlib = 0;
int cstring = 0;
int fstream = 0;
int string = 0;
int usingnamespacestd = 0;

int tokenize(int);
void handle_include();
%}

/* lexer options */
%option yylineno
%option noyywrap
%option header-file="120lex.h"
%option yylineno

intsuffix				([uU][lL]?)|([lL][uU]?)
fracconst				([0-9]*\.[0-9]+)|([0-9]+\.)
exppart					[eE][-+]?[0-9]+
floatsuffix				[fFlL]
chartext				([^'])|(\\.)
stringtext				([^"])|(\\.)

%%
"#include <iostream>"   { iostream = 1;}
"#include <ctime>"      { ctime = 1; }
"#include <iomanip>"    { iomanip = 1; }
"#include <cmath>"      { cmath = 1; }
"#include <cstdlib>"    { cstdlib = 1; }
"#include <cstring>"    { cstring = 1; }
"#include <fstream>"    { fstream = 1; }
"#include <string>"     { string  = 1; }
"#include"[ ]*\"[^\\"]+\" {handle_include(); }
"using namespace std;"                   { usingnamespacestd = 1; }
"\n"					{ ++lineno; }
[\t\f\v\r ]+				{ /* Ignore whitespace. */ }

"/*"					{ skip_comment(); }
"//"					{ skip_until_eol(); }

"{"					{ return tokenize('{'); }
"<%"					{ return tokenize('{'); }
"}"					{ return tokenize('}'); }
"%>"					{ return tokenize('}'); }
"["					{ return tokenize('['); }
"<:"					{ return tokenize('['); }
"]"					{ return tokenize(']'); }
":>"					{ return tokenize(']'); }
"("					{ return tokenize('('); }
")"					{ return tokenize(')'); }
";"					{ return tokenize(';'); }
":"					{ return tokenize(':'); }
"..."					{ return tokenize(ELLIPSIS); }
"?"					{ return tokenize('?'); }
"::"					{ return tokenize(COLONCOLON); }
"."					{ return tokenize('.'); }
".*"					{ return tokenize(DOTSTAR); }
"+"					{ return tokenize('+'); }
"-"					{ return tokenize('-'); }
"*"					{ return tokenize('*'); }
"/"					{ return tokenize('/'); }
"%"					{ return tokenize('%'); }
"^"					{ return tokenize('^'); }
"xor"					{ return tokenize('^'); }
"&"					{ return tokenize('&'); }
"bitand"				{ return tokenize('&'); }
"|"					{ return tokenize('|'); }
"bitor"					{ return tokenize('|'); }
"~"					{ return tokenize('~'); }
"compl"					{ return tokenize('~'); }
"!"					{ return tokenize('!'); }
"not"					{ return tokenize('!'); }
"="					{ return tokenize('='); }
"<"					{ return tokenize('<'); }
">"					{ return tokenize('>'); }
"+="					{ return tokenize(ADDEQ); }
"-="					{ return tokenize(SUBEQ); }
"*="					{ return tokenize(MULEQ); }
"/="					{ return tokenize(DIVEQ); }
"%="					{ return tokenize(MODEQ); }
"^="					{ return tokenize(XOREQ); }
"xor_eq"				{ return tokenize(XOREQ); }
"&="					{ return tokenize(ANDEQ); }
"and_eq"				{ return tokenize(ANDEQ); }
"|="					{ return tokenize(OREQ); }
"or_eq"					{ return tokenize(OREQ); }
"<<"					{ return tokenize(SL); }
">>"					{ return tokenize(SR); }
"<<="					{ return tokenize(SLEQ); }
">>="					{ return tokenize(SREQ); }
"=="					{ return tokenize(EQ); }
"!="					{ return tokenize(NOTEQ); }
"not_eq"				{ return tokenize(NOTEQ); }
"<="					{ return tokenize(LTEQ); }
">="					{ return tokenize(GTEQ); }
"&&"					{ return tokenize(ANDAND); }
"and"					{ return tokenize(ANDAND); }
"||"					{ return tokenize(OROR); }
"or"					{ return tokenize(OROR); }
"++"					{ return tokenize(PLUSPLUS); }
"--"					{ return tokenize(MINUSMINUS); }
","					{ return tokenize(','); }
"->*"					{ return tokenize(ARROWSTAR); }
"->"					{ return tokenize(ARROW); }

"asm"					{ return tokenize(ASM); }
"auto"					{ return tokenize(AUTO); }
"bool"					{ return tokenize(BOOL); }
"break"					{ return tokenize(BREAK); }
"case"					{ return tokenize(CASE); }
"catch"					{ return tokenize(CATCH); }
"char"					{ return tokenize(CHAR); }
"class"					{ return tokenize(CLASS); }
"const"					{ return tokenize(CONST); }
"const_cast"				{ return tokenize(CONST_CAST); }
"continue"				{ return tokenize(CONTINUE); }
"default"				{ return tokenize(DEFAULT); }
"delete"				{ return tokenize(DELETE); }
"do"					{ return tokenize(DO); }
"double"				{ return tokenize(DOUBLE); }
"dynamic_cast"				{ return tokenize(DYNAMIC_CAST); }
"else"					{ return tokenize(ELSE); }
"enum"					{ return tokenize(ENUM); }
"explicit"				{ return tokenize(EXPLICIT); }
"export"				{ return tokenize(EXPORT); }
"extern"				{ return tokenize(EXTERN); }
"false"					{ return tokenize(FALSE); }
"float"					{ return tokenize(FLOAT); }
"for"					{ return tokenize(FOR); }
"friend"				{ return tokenize(FRIEND); }
"goto"					{ return tokenize(GOTO); }
"if"					{ return tokenize(IF); }
"inline"				{ return tokenize(INLINE); }
"int"					{ return tokenize(INT); }
"long"					{ return tokenize(LONG); }
"mutable"				{ return tokenize(MUTABLE); }
"namespace"				{ return tokenize(NAMESPACE); }
"new"					{ return tokenize(NEW); }
"operator"				{ return tokenize(OPERATOR); }
"private"				{ return tokenize(PRIVATE); }
"protected"				{ return tokenize(PROTECTED); }
"public"				{ return tokenize(PUBLIC); }
"register"				{ return tokenize(REGISTER); }
"reinterpret_cast"			{ return tokenize(REINTERPRET_CAST); }
"return"				{ return tokenize(RETURN); }
"short"					{ return tokenize(SHORT); }
"signed"				{ return tokenize(SIGNED); }
"sizeof"				{ return tokenize(SIZEOF); }
"static"				{ return tokenize(STATIC); }
"static_cast"				{ return tokenize(STATIC_CAST); }
"struct"				{ return tokenize(STRUCT); }
"switch"				{ return tokenize(SWITCH); }
"template"				{ return tokenize(TEMPLATE); }
"this"					{ return tokenize(THIS); }
"throw"					{ return tokenize(THROW); }
"true"					{ return tokenize(TRUE); }
"try"					{ return tokenize(TRY); }
"typedef"				{ return tokenize(TYPEDEF); }
"typeid"				{ return tokenize(TYPEID); }
"typename"				{ return tokenize(TYPENAME); }
"union"					{ return tokenize(UNION); }
"unsigned"				{ return tokenize(UNSIGNED); }
"using"					{ return tokenize(USING); }
"virtual"				{ return tokenize(VIRTUAL); }
"void"					{ return tokenize(VOID); }
"volatile"				{ return tokenize(VOLATILE); }
"wchar_t"				{ return tokenize(WCHAR_T); }
"while"					{ return tokenize(WHILE); }

[a-zA-Z_][a-zA-Z_0-9]*			{ return tokenize(check_identifier(yytext)); }

"0"[xX][0-9a-fA-F]+{intsuffix}?		{ return tokenize(INTEGER); }
"0"[0-7]+{intsuffix}?			{ return tokenize(INTEGER); }
[0-9]+{intsuffix}?			{ return tokenize(INTEGER); }

{fracconst}{exppart}?{floatsuffix}?	{ return tokenize(FLOATING); }
[0-9]+{exppart}{floatsuffix}?		{ return tokenize(FLOATING); }

"'"{chartext}*"'"			{ return tokenize(CHARACTER); }
"L'"{chartext}*"'"			{ return tokenize(CHARACTER); }

"\""{stringtext}*"\""			{ return tokenize(STRING); }
"L\""{stringtext}*"\""			{ return tokenize(STRING); }

.					{ fprintf(stderr, "%d: unexpected character `%c'\n", lineno, yytext[0]); }

<<EOF>>                 { 

  yypop_buffer_state();
  pop_node(&filestack);
  if (filestack == NULL) {
    yyterminate();    
    printf("ALL FILES PARSED!\n");
  }

  yylineno = 1;
  if (!YY_CURRENT_BUFFER) {
    printf("NO MORE BUFFERS!\n");
    yyterminate();
  } 
}

%%

int tokenize(int category) {
  yytoken = create_token(category, yytext, yylineno, filestack->filename);

  yylval.tptr = alctree(yytext, category, 0);
  yylval.tptr->leaf = yytoken;
  
  return category;
};

/*
 * We use this routine instead a lex pattern because we don't need
 * to save the matched comment in the `yytext' buffer.
 */

static void skip_comment(void) {
	int c1, c2;

	c1 = input();
	c2 = input();

	while (c2 != EOF && !(c1 == '*' && c2 == '/')) {
		if (c1 == '\n')
			++lineno;
		c1 = c2;
		c2 = input();
	}
};

static void skip_until_eol(void) {
	int c;

	while ((c = input()) != EOF && c != '\n')
		;
	++lineno;
};

/* Handles includes using built-in yybuffer */
void handle_include() {

  char *fname = malloc(strlen(yytext)+1-strlen("#include \"\""));
  fname = strchr(yytext, '\"')+1;
  fname[strlen(fname)-1] = '\0';
  printf("%s\n",fname);
  yyin = fopen(fname,"r");
  push_node(&filestack, fname);
  yypush_buffer_state(yy_create_buffer(yyin, YY_BUF_SIZE));

};

/*
 * Type name table.
 * Replace this with a hash table, when you get a chance.
 */

struct typenametable_entry {
   char *name;
   int category;
   struct typenametable_entry *next;
   } *head;

int typenametable_lookup(char *s)
{
   struct typenametable_entry *tmp = head;
   while (tmp) {
      if (!strcmp(s, tmp->name)) return tmp->category;
      tmp = tmp->next;
   }
   return IDENTIFIER;
}


int typenametable_insert(char *s, int cat)
{
   struct typenametable_entry *tmp = head;
   while (tmp) {
      if (!strcmp(s, tmp->name)) {
         fprintf(stderr,
	    "warning, %s is already in the typename table as a %d\n",
	    s, tmp->category );
         return tmp->category;
         }
      tmp = tmp->next;
   }
   tmp = calloc(1, sizeof (struct typenametable_entry));
   if(!tmp) { fprintf(stderr, "tnti out of memory\n"); return -1; }
   tmp->name = strdup(s);
   tmp->category = cat;
   tmp->next = head;
   head = tmp;
}

static int check_identifier(char *s) {
	return typenametable_lookup(s);
}

