#include <stdio.h>
int g=1;
int *ptr=&g;
void f1() {
  int lf1=2;
  ptr=&lf1;
  printf("within f1 lf1=%p\n",&lf1);
}
void f2() {
  int lf2=3;
  printf("within f2 lf2=%p\n",&lf2);
}
int main(int argc, char **argv) {
  printf("*ptr=%d\n",*ptr);
  f1();
  printf("*ptr=%d\n",*ptr);
  f2();
  printf("*ptr=%d\n",*ptr);
  return 0;
}
