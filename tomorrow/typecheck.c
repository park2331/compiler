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


treeptr handlefuncdef( treeptr t, tableptr scope ) {

  int i;

  if ( t->num_of_children == 0 ) {

    if ( t->leaf );
      return t;
  
  } else if( t->num_of_children > 0 ) {

    for(i=0; i < t->num_of_children; i++) {

      return populatesymtab( t->child[i] , scope );

    }

  } else {

    return NULL;

  }

}

treeptr populatesymtab( treeptr t , tableptr scope ) {

  int i,j, key;
  treeptr temp;
  entryptr local;

  if ( !t ) {
    return NULL;

  } else if (t->num_of_children == 0 ) {

    if (t->leaf->category == IDENTIFIER) {
      insert_entry(t->leaf->text , scope);
      
      return t;

    } else {
      return NULL;
    }
  } else if( t->num_of_children > 0 ) {

    key = get_key( t->name );
    printf( "%s = %d\n",t->name, key );

    switch(key) {


    case function_definition_804:
      local = new_scope("local");
      for (j=0; j < t->num_of_children; j++) {
	populatesymtab( t->child[j] , local->entrytable );
      }
      insert_entry( local->entrytable->name, scope );

    case direct_declarator_725:

      scope->name = strdup(t->child[0]->leaf->text);

      break;

    default:

      for (i=0; i < t->num_of_children; i++) {
	populatesymtab( t->child[i] , scope );
      }
      break;
    }

  } else {
    return NULL;
  }
};


