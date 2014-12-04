/* symtab.h
 * Interface and function definition for implementation of symbol tables
 * in the 120++ compiler.
 */

  
#ifndef SYMTAB_H
#define SYMTAB_H

/* Include algorithm for hash function ...possibly reduce into one file */
#include "hasht.h"


/* Forward declaration */
struct entry;
struct type;
struct table;


/* An entry can be a type entry or table entry.
 * Table entry is for storing scopes.
 */

typedef struct entry {

  char *name;
  
  struct type *typedata;
  struct table *scopetable;

} * entryptr;



/* Hash table struct that holds scope name and type data */
typedef struct table {

  char *name;
  entryptr entry[900];
    
} * tableptr;


/* Data struct which holds type information stored in an table entry */
typedef struct type {

  int basetype;
  int code;
  
  union {
    
    struct arraytype {
      
      int size;
      struct entry *type;
      /* some table */
      
    } a;

    struct functiontype {

      struct entry *type;
      /* some table */

    } f;

    struct classtype {
      struct entry *type;
      /* some table */

    } c;

  };

} * typeptr;

/* Prototype declarations */
tableptr new_table( char* );
entryptr new_entry( char* );
entryptr new_scope( char* );
void insert( entryptr, tableptr );
bool lookup( char *, tableptr );
  
#endif /* SYMTAB_H */
