/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     INTEGER = 259,
     FLOATING = 260,
     CHARACTER = 261,
     STRING = 262,
     TYPEDEF_NAME = 263,
     CLASS_NAME = 264,
     ENUM_NAME = 265,
     ELLIPSIS = 266,
     COLONCOLON = 267,
     DOTSTAR = 268,
     ADDEQ = 269,
     SUBEQ = 270,
     MULEQ = 271,
     DIVEQ = 272,
     MODEQ = 273,
     XOREQ = 274,
     ANDEQ = 275,
     OREQ = 276,
     SL = 277,
     SR = 278,
     SREQ = 279,
     SLEQ = 280,
     EQ = 281,
     NOTEQ = 282,
     LTEQ = 283,
     GTEQ = 284,
     ANDAND = 285,
     OROR = 286,
     PLUSPLUS = 287,
     MINUSMINUS = 288,
     ARROWSTAR = 289,
     ARROW = 290,
     ASM = 291,
     AUTO = 292,
     BOOL = 293,
     BREAK = 294,
     CASE = 295,
     CATCH = 296,
     CHAR = 297,
     CLASS = 298,
     CONST = 299,
     CONST_CAST = 300,
     CONTINUE = 301,
     DEFAULT = 302,
     DELETE = 303,
     DO = 304,
     DOUBLE = 305,
     DYNAMIC_CAST = 306,
     ELSE = 307,
     ENUM = 308,
     EXPLICIT = 309,
     EXPORT = 310,
     EXTERN = 311,
     FALSE = 312,
     FLOAT = 313,
     FOR = 314,
     FRIEND = 315,
     GOTO = 316,
     IF = 317,
     INLINE = 318,
     INT = 319,
     LONG = 320,
     MUTABLE = 321,
     NAMESPACE = 322,
     NEW = 323,
     OPERATOR = 324,
     PRIVATE = 325,
     PROTECTED = 326,
     PUBLIC = 327,
     REGISTER = 328,
     REINTERPRET_CAST = 329,
     RETURN = 330,
     SHORT = 331,
     SIGNED = 332,
     SIZEOF = 333,
     STATIC = 334,
     STATIC_CAST = 335,
     STRUCT = 336,
     SWITCH = 337,
     TEMPLATE = 338,
     THIS = 339,
     THROW = 340,
     TRUE = 341,
     TRY = 342,
     TYPEDEF = 343,
     TYPEID = 344,
     TYPENAME = 345,
     UNION = 346,
     UNSIGNED = 347,
     USING = 348,
     VIRTUAL = 349,
     VOID = 350,
     VOLATILE = 351,
     WCHAR_T = 352,
     WHILE = 353,
     NAMESPACE_NAME = 354,
     TEMPLATE_NAME = 355
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define INTEGER 259
#define FLOATING 260
#define CHARACTER 261
#define STRING 262
#define TYPEDEF_NAME 263
#define CLASS_NAME 264
#define ENUM_NAME 265
#define ELLIPSIS 266
#define COLONCOLON 267
#define DOTSTAR 268
#define ADDEQ 269
#define SUBEQ 270
#define MULEQ 271
#define DIVEQ 272
#define MODEQ 273
#define XOREQ 274
#define ANDEQ 275
#define OREQ 276
#define SL 277
#define SR 278
#define SREQ 279
#define SLEQ 280
#define EQ 281
#define NOTEQ 282
#define LTEQ 283
#define GTEQ 284
#define ANDAND 285
#define OROR 286
#define PLUSPLUS 287
#define MINUSMINUS 288
#define ARROWSTAR 289
#define ARROW 290
#define ASM 291
#define AUTO 292
#define BOOL 293
#define BREAK 294
#define CASE 295
#define CATCH 296
#define CHAR 297
#define CLASS 298
#define CONST 299
#define CONST_CAST 300
#define CONTINUE 301
#define DEFAULT 302
#define DELETE 303
#define DO 304
#define DOUBLE 305
#define DYNAMIC_CAST 306
#define ELSE 307
#define ENUM 308
#define EXPLICIT 309
#define EXPORT 310
#define EXTERN 311
#define FALSE 312
#define FLOAT 313
#define FOR 314
#define FRIEND 315
#define GOTO 316
#define IF 317
#define INLINE 318
#define INT 319
#define LONG 320
#define MUTABLE 321
#define NAMESPACE 322
#define NEW 323
#define OPERATOR 324
#define PRIVATE 325
#define PROTECTED 326
#define PUBLIC 327
#define REGISTER 328
#define REINTERPRET_CAST 329
#define RETURN 330
#define SHORT 331
#define SIGNED 332
#define SIZEOF 333
#define STATIC 334
#define STATIC_CAST 335
#define STRUCT 336
#define SWITCH 337
#define TEMPLATE 338
#define THIS 339
#define THROW 340
#define TRUE 341
#define TRY 342
#define TYPEDEF 343
#define TYPEID 344
#define TYPENAME 345
#define UNION 346
#define UNSIGNED 347
#define USING 348
#define VIRTUAL 349
#define VOID 350
#define VOLATILE 351
#define WCHAR_T 352
#define WHILE 353
#define NAMESPACE_NAME 354
#define TEMPLATE_NAME 355




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 71 "120gram.y"
{
  struct tree *tptr;
}
/* Line 1529 of yacc.c.  */
#line 253 "120gram.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

