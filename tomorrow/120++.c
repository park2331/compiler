/* 120++.c
 * Main file for lexer
 */

#include <stdio.h>
#include <stdlib.h>
#include "token.h"
#include "tlist.h"
#include "120lex.h"
#include "tree.h"
#include "120gram.tab.h"
#include "hasht.h"
#include "symtab.h"
#include "typecheck.h"

extern FILE *yyin;
extern char *yytext;
extern tokenptr yytoken;
extern int yyparse();
extern YYSTYPE yylval;
extern treeptr t_unit;


nodeptr filestack = NULL;
tableptr classtable;
tableptr classfunctable;
tableptr functable;
tableptr globaltable;

int main(int argc, char **argv) {

  struct node *root = NULL;

  int i;
  int code = -1;
  const char *filelist[argc];

  t_unit = NULL;
  
  /* Declaring Scopes */
  classtable = new_table( "classtable" );
  classfunctable = new_table( "classfunctable" );
  functable = new_table( "functable" );
  globaltable = new_table( "globaltable" );

  if(argc == 1) {
    printf("No files to (F)lex!\n");
    return 0;
  }
  /* Put file names in list */
  argc--;
  argv++;
  for (i = 0; i < argc; i++) {
    filelist[i] = argv[i];
  }

  /* Push onto flex's convenient buffer */
  for (i = 0; i < argc; i++) {
    //    yyin = fopen(filelist[i],"r");
    yyin = fopen(argv[i],"r");
    if (yyin == NULL) {
      printf("%s is not a file!\n",filelist[i]);
      return 0;
    }

    
    /* Push onto filestack as defined in token.c */
    push_node(&filestack, filelist[i]);
    yypush_buffer_state(yy_create_buffer(yyin, YY_BUF_SIZE));
  }

  printf("FILES TO BE PARSED:\n");
  print_stack(&filestack);
    
  int parse_code = 0;

  
  while(!feof(yyin)) {
      parse_code = yyparse();

    }
  
  printf("Result: %d\n", parse_code);
  //      printf("%s\n",yylval.tptr->name);
  treeprint( t_unit , 0 );

  populatesymtab( t_unit , globaltable );

  return 0;
}
