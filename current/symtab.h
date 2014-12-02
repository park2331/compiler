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



/* An entry consists of a name and type info struct  */
typedef struct entry {

  char *name;
  struct type *typedata;
  
} * entryptr;



/* Hash table struct that holds name and type data */
typedef struct table {

  char *name;
  entryptr symentry[900];
    
} * tableptr;


/* Data struct which holds type information stored in an table entry */
typedef struct type {

  int basetype;
  
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

    struct classtypea {
      struct entry *type;
      /* some table */

    } c;

  };

} * typeptr;


  
#endif /* SYMTAB_H */
