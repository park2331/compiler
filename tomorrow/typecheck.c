/* typecheck.
 *
 * Traverses outputed tree from bison and lex; 
 * Perform symbol population and then type checking.
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include "120gram.tab.h"
#include "symtab.h"
#include "hasht.h"
#include "typecheck.h"
#include "tree.h"


void populate_symbols(treeptr t) {


};


int main() {


  char *name;
  int key;
  prodrule_t rule;

  name = "function_definition_804";

  key = get_key( name );
  printf( "key: %d\n" , key );

  switch(key) {
    
  case function_definition_803:
  printf( "SUCESS; key: %d\n" , key );
  break;
  }

  return 0;

};
