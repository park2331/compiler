#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "hasht.h"

/* hash function */
unsigned long sdbm (char *str) {
  unsigned long hash = 0;
  int c;
  while (c = *str++) {
    hash = c + (hash << 6) + (hash << 16) - hash;
  }
  return hash;                                                                 
};

/* table struct */
typedef struct table{
  

} * tableptr;

/* union type */
typedef union entry_type{
  char *s;
  int i;
  tableptr t;
}entype;

bool is_entry (char *str) {
  
}

int main() {

  char *table[900];
  char *str = "Damn";

  unsigned long result = 0;
  
  result = sdbm(str) % 900;
  fprintf(stdout, "%lu\n", result);
  
  table[result] = strdup(str);

  fprintf(stdout, "%s\n", table[result]);
  if (!table[0])
    fprintf(stdout, "WAS NULL\n");
  else
    fprintf(stdout, "%s\n", table[0]);

  return 0;
}


