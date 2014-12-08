/* tree.h
 * Struct and prototype definitions
 */
#ifndef TREE_H_
#define TREE_H_

#include "token.h"

typedef struct tree {
  char* name;
  int prod_rule;
  int num_of_children;
  struct tree *child[9];
  struct token *leaf;
} * treeptr;

void treeprint(treeptr, int);
treeptr alctree(char*, int, int, ...);
#endif /* TREE_H_ */
