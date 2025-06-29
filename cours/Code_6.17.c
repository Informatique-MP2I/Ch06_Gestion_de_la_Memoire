#include <stdlib.h>
#include <assert.h>
int main(int argc, char **argv) {
  int *p, *t;
  p = (int *)malloc(100*sizeof(int));
  assert(p != NULL);
  t = (int *)malloc(100*sizeof(int));
  assert(t != NULL);
  t = p;
  free(p);
  return 0;
}

