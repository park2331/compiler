#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symtab.h"

void print_entry(tableptr t, entryptr e) {

  fprintf(stdout, "TABLE: %s\n", t->name);
  fprintf(stdout, "ENTRY: %s\n", e->name);
  fprintf(stdout, "TYPE: %d\n", e->typedata->basetype);
  
};

/* Initialize new table for use */
tableptr new_table(char* n) {

  tableptr t = calloc(1, sizeof(tableptr));
  t->name = strdup(n);

  return t;
}

/* Initialize new entry for use */
entryptr new_entry(char* n, typeptr t) {

  entryptr e = calloc(1, sizeof(entryptr));
  e->name = strdup(n);

  e->typedata = t;
  
  return e;
}
		   
int main() {


  /* Data to enter:
   * (pseudo code)
   *
   * entryptr.name <- foo
   * entryptr.type <- function definition
   */

  /* declare table*/
  tableptr global = new_table("global");

  typeptr bar = calloc(1, sizeof(typeptr));
  bar->basetype = 666;
  
  entryptr foo = new_entry("foo", bar);


  print_entry(global, foo);
}
