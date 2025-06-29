#include <stdio.h>
int main(int argc, char **argv) {
  double tab[10]={10,11,12,13,14,15,16,17,18,19};
  double *ptr1=&tab[0];
  double *ptr2=&tab[1];
  printf("sizeof(double)=%zu\n",sizeof(double));    
  printf("ptr1: %p\n", ptr1);
  printf("ptr2: %p\n", ptr2);
  return 0;
}
