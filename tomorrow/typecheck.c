/* typecheck.c
 *
 * Traverses outputed tree from bison and lex; 
 * Perform symbol population and then type checking.
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "120gram.tab.h"
#include "symtab.h"
#include "hasht.h"
#include "typecheck.h"


void populatesymtab( treeptr t , tableptr scope ) {

  int i, key;

  
  if (!t) {
    
    /* Do nothing */
    
  } else {

    /* Its a leaf, get type info */
    if ( t->num_of_children == 0 ) {

      if ( t->leaf->category == IDENTIFIER )  {

	insert_entry( t->leaf->text , scope );
	
      }
      
    } else {

      /* Its type */
      key = get_key(t->name);
      entryptr local;
	
      switch(key) {


      case class_head_836:

	printf("%s\n" , t->child[0]->leaf->text);
	scope->name = strdup(t->child[1]->leaf->text);

	break;
	
      case direct_declarator_725:

	
	printf("%s\n" , t->child[0]->leaf->text);
	scope->name = strdup(t->child[0]->leaf->text);
	  
	break;


      case function_definition_804:
      case class_specifier_832:
	
	local = new_scope("local");
	
	for(i=0; i < t->num_of_children; i++) {
	  populatesymtab( t->child[i] , local->entrytable );
	}

	break;

	/*
      case init_declarator_712:
	

	
	break;
	*/
      default:
	
	for(i=0; i < t->num_of_children; i++) {
	  populatesymtab( t->child[i] , scope );
	}
	
      }
    }
  }
};



/*
  switch(key) {

  case declaration_seq_504:
    printf( "SUCESS; key: %d\n" , key );
    break;
    
  case function_definition_803:
    printf( "function_definition_803!\n");:
    break;

  case DEFAULT:
    printf( "SUCESS; key: %d\n" , key );
    break;
    
  }

};
  
int print_key() {
  //  int main() {

  char *name;
  int key;
  prodrule_t rule;

  name = strdup("declaration_seq_504");


  key = get_key( name );
  printf( "key: %d\n" , key );


  return 0;

};
*/
