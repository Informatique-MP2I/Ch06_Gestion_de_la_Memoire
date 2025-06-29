#include <stdio.h>
int main(int argc,char **argv) {
  int v=55;
  int *ptr=&v;
  int **ptr2=&ptr;
  printf("ptr   : %p\n", ptr);
  printf("*ptr  : %d\n", *ptr);
  printf("ptr2  : %p\n", ptr2);
  printf("*ptr2 : %p\n", *ptr2);
  printf("**ptr2: %d\n", **ptr2); 
  return 0;
}
