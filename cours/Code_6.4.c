#include <stdio.h>
int main(int argc, char **argv) {
  int v=55;
  int *ptr = &v;
  printf("ptr  : %p\n", ptr);
  printf("*ptr : %d\n", *ptr);
  return 0;
}
