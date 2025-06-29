#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
int main(int argc, char **argv) {
  int *p, *t, *s;
  p = (int *)malloc(100*sizeof(int));
  assert(p != NULL);
  printf("The adress of p : %p\n",p);
  s = p;
  t = s;
  free(s);
  free(t);
  return 0;
}

