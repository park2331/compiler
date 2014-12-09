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

/* wrapper */
int get_key(char* str) {
  unsigned long k;
  k = sdbm( str ) % 10000;

  return k;
};


/* union type */
/*
int main() {

  char * table[900];
  unsigned long key;

  char * value = "hello";

  key = sdbm(value) % 900;
  fprintf(stdout, "KEY: %lu\n", key);

  table[key] = strdup(value);

  fprintf(stdout, "VALUE: %s\n", table[key]);

  
}
*/
