#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "symtab.h"
#include "hasht.h"


/* Initialize new table for use */
tableptr new_table(char* n) {

  tableptr t = calloc(1, sizeof(tableptr));
  t->name = strdup(n);

  return t;
}



/* Creates 'type' entry  */
entryptr new_entry(char* n) {

  entryptr e = calloc(1, sizeof(entryptr));
  typeptr t = calloc(1, sizeof(typeptr));

  e->name = strdup(n);

  /* Initialize type */
  e->typedata = t;
  
  return e;
}


/* Creates 'table' entry */
entryptr new_scope(char *n) {

  entryptr e = new_entry(n);
  
  e->name = strdup(n);
  e->scopetable = new_table(n);

  /* not needed, as this is a scope table entry */
  free(e->typedata);

  return e;
 
};


/* Insert entry */
void insert(entryptr e, tableptr t) {

  unsigned long key = sdbm(e->name) % 900;

  t->entry[key] = e;

  //  printf("%s\n",t->entry[key]->name);
  
};


/* Function inserts entry by name */
void insert_entry(char* n, tableptr t) {

  entryptr e = new_entry(n);

  insert(e, t);
  
};

/* Function creates and inserts a scope table into table t*/
void insert_scope(char* n, tableptr t) {

  entryptr e = new_scope(n);

  insert(e, t);
  
};


/* Return scope table by name */
tableptr get_scope(char* n, tableptr t) {
  
  unsigned long key = sdbm(n) % 900;

  return t->entry[key]->scopetable;
  
};

bool lookup(char *n, tableptr t) {

  unsigned long key = sdbm(n) % 900;  


  if (t->entry[key]) {
    
    fprintf(stdout, "Entry: \"%s\" found!\n", n);
    return true;
    
  } else {

    fprintf(stdout, "Entry: \"%s\" not found.\n", n);
    return false;
    
  }
  
};



/*
int main() {

  /* declare and init global scope table 
  tableptr globalscope;
  tableptr temp0;
  tableptr temp1;
  tableptr temp2;
  unsigned long key0;
  unsigned long key1;
  
  globalscope = new_scope("global");

  /* insert functions; main 
  insert_scope( "funcFOO", globalscope );

  /* get function scope from global scope
  temp0 = get_scope( "funcFOO", globalscope );

  /* insert entry 
  insert_entry( "param1", temp0 );


  key0 = sdbm("funcFOO") % 900;

  temp1 = globalscope->entry[key0]->scopetable;
	     
  lookup( "param1", temp1 );
  */
  
  /*
    
  insert_scope( "funcBAR", globalscope );
  insert_scope( "funcBAZ", globalscope );
  insert_scope( "main", globalscope );

  lookup( "funcFOO", globalscope );
  lookup( "funcBAR", globalscope );
  lookup( "funcBAZ", globalscope );
  lookup( "main", globalscope );

    
  return 0;
}
*/
