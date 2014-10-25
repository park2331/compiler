/* tree.c
 * Tree data struct used to build tree nodes, called in 120gram.y
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "tree.h"

/* Allocates tree node with n children */
treeptr alctree(char *gram_prod_name, int label, int nkids, ...)
{
  int i;
  va_list ap;
  treeptr ptr = malloc(sizeof(struct tree) + (nkids-1)*sizeof(treeptr));

  if (ptr == NULL) {fprintf(stderr, "alctree out of memory\n"); exit(1); }

  char *prod_name = strdup(gram_prod_name); 
  ptr->name = prod_name;
  ptr->prod_rule = label;
  ptr->num_of_children = nkids;

  /* if va args = 0; do nothing */
  if (nkids > 0) {
    va_start(ap, nkids);
    for(i=0; i < nkids; i++) {
      ptr->child[i] = va_arg(ap, struct tree *);
    }
    va_end(ap);
  }


  return ptr;
}

/* In order tree print */
void treeprint(struct tree *t, int depth)
{
  int i;
  if (!t) {
    /* Do nothing */
  } else {
    printf("%*s %s: %d children\n", depth*2, " ", t->name, t->num_of_children);
    for(i=0; i<t->num_of_children; i++)
      treeprint(t->child[i], depth+1);
  }
}

