#include <stdio.h>
#include <stdlib.h>
#include "symtab.h"
#include "hasht.h"

int main() {

  /* declare and init global scope table */
  tableptr globalscope;
  tableptr temp0;
  tableptr temp1;
  tableptr temp2;
  entryptr e1;
  int key0;
  int key1;
  
  globalscope = new_table("global");

  /* insert functions; main */
  insert_scope( "funcFOO", globalscope );

  /* get function scope from global scope */
  temp0 = get_scope( "funcFOO", globalscope );

  /* insert entry */
  insert_entry( "param1", temp0 );


  key0 = get_key("funcFOO");

  temp1 = globalscope->entry[key0]->scopetable;
	     
  lookup( "param1", temp1 );

  

    
  insert_scope( "funcBAR", globalscope );
  insert_scope( "funcBAZ", globalscope );
  insert_scope( "main", globalscope );

  lookup( "funcFOO", globalscope );
  lookup( "funcBAR", globalscope );
  lookup( "funcBAZ", globalscope );
  lookup( "main", globalscope );

    
  return 0;
}
