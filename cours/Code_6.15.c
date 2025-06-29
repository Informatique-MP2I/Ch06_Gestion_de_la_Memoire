#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv) {
  int *ptr1, *ptr2, *ptr3; 
  ptr1 = (int *)malloc(sizeof(int));
  if(ptr1==NULL) return 1; // exit: out of mem
  *ptr1 = 3;
  printf("*ptr1 : %d\n",*ptr1);
  printf("ptr1  : %p\n",ptr1);
  ptr2 = (int *)malloc(sizeof(int));
  if(ptr2==NULL) return 1; // exit: out of mem
  *ptr2=4;
  printf("*ptr2 : %d\n",*ptr2);
  printf("ptr2  : %p\n",ptr2);
  printf("\nfree(ptr1)\n");
  free(ptr1);
  printf("*ptr1 : %d\n",*ptr1);
  printf("ptr1  : %p\n",ptr1);   
  ptr3 = (int *)malloc(sizeof(int));
  if(ptr3==NULL) return 1; // exit: out of mem
  *ptr3 = 5; 
  printf("*ptr3 : %d\n",*ptr3);
  printf("ptr3  : %p\n",ptr3);    
  printf("*ptr1 : %d\n",*ptr1);
  free(ptr2);
  free(ptr3);
  return 0;
}
