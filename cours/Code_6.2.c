#include <stdio.h>
void swap2(int *p, int *q){
  int tmp;
  tmp = *p;
  *p = *q;
  *q = tmp;
  printf("In swap2, after the swap: *p=%d, *q=%d.\n", *p, *q);
  return;
}
int main(int argc, char **argv){
  int a = 5;
  int b = 2;
  swap2(&a,&b);
  printf("In main, after the swap, a=%d et b=%d.\n",a,b);
  return 0;
}
