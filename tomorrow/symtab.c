#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "symtab.h"
#include "hasht.h"



/* Creates 'type' entry; init memory and store name */
entryptr new_entry(char* n) {

  entryptr e = calloc(1, sizeof(entryptr));
  typeptr t = calloc(1, sizeof(typeptr));

  e->name = strdup(n);

  /* Initialize type */
  e->entrytype = t;
  
  return e;
};


/* Initialize new table for use; init mem and store name. */
tableptr new_table(char* n) {

  tableptr t = calloc(1, sizeof(tableptr));
  t->name = strdup(n);

  return t;
};


/* Init mem for entry, stores name, inits table field of entry struct. 
 * Returns entry pointer.
 */
entryptr new_scope(char *n) {

  entryptr e = new_entry(n);
  
  e->name = strdup(n);
  e->entrytable = new_table(n);

  /* not needed, as this is a scope table entry */
  free(e->entrytype);

  return e;
 
};


/* Insert entry; takes entry struct as param */
void insert(entryptr e, tableptr t) {

  //unsigned long key = sdbm(e->name) % 900;
  int key = get_key(e->name);

  t->entry[key] = e;

  fprintf( stdout , "%s was INSERTED into %s at location %d.\n" , e->name , t->name , key );
  
};


/* Inserts entry by name */
void insert_entry(char* n, tableptr t) {

  entryptr e = new_entry(n);

  insert(e, t);


  
};

/* Function creates and inserts a scope table into table t*/
void insert_scope(char* n, tableptr t) {

  entryptr e = new_scope(n);

  insert(e, t);
  
};

entryptr get_entry( char *n , tableptr t ) {

  return t->entry[get_key(n)];
}


/* Return entry */
tableptr get_scope(char *n, tableptr t) {
  
  //unsigned long key = sdbm(n) % 900;
  int key = get_key(n);
  
  return t->entry[key]->entrytable;
  
};

bool lookup(char *n, tableptr t) {

  //  unsigned long key = sdbm(n) % 900;  
  int key = get_key(n);

  if (t->entry[key]) {
    
    fprintf(stdout, "Entry: \"%s\" found in table \"%s\" at location %d\n", n, t->name , key );
    return true;
    
  } else {

    fprintf(stdout, "Entry: \"%s\" NOT found in table \"%s\"\n", n, t->name );
    return false;
    
  }
  
};

