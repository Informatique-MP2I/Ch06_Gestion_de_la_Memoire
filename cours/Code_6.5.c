#include <stdio.h>
int main(int argc,char **argv) {
  int v=8;
  int *ptr = &v;
  printf("v    : %d\n", v);
  printf("ptr  : %p\n", ptr);
  printf("*ptr : %d\n", *ptr);
  printf("\nv = 3\n");
  v=3;	
  printf("v    : %d\n", v);
  printf("ptr  : %p\n", ptr);
  printf("*ptr : %d\n", *ptr);
  printf("\n*ptr = 5\n");
  *ptr=5;
  printf("v    : %d\n", v);
  printf("ptr  : %p\n", ptr);
  printf("*ptr : %d\n", *ptr);
  return 0;
}
