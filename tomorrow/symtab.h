/* symtab.h
 * Interface and function definition for implementation of symbol tables
 * in the 120++ compiler.
 */

  
#ifndef SYMTAB_H
#define SYMTAB_H

/* Include algorithm for hash function ...possibly reduce into one file */
#include <stdbool.h>
#include <stdio.h>
#include "hasht.h"
#include "tree.h"


/* Forward declaration */
struct entry;
struct type;
struct table;


/* An entry can be a type entry or table entry.
 * Table entry is for storing scopes.
 */

typedef struct entry {

  char *name;
  
  struct type *entrytype;
  struct table *entrytable;

} * entryptr;



/* Hash table struct that holds scope name and type data */
typedef struct table {

  char *name;
  entryptr entry[];
  //  entryptr *entry;
    
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
void insert_entry( char* , tableptr );
tableptr get_scope(char* , tableptr );
bool lookup( char *, tableptr );
  
#endif /* SYMTAB_H */
