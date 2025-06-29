#include <stdio.h>
int g = 3; 
void f1(int i1) {
  int l1 = 1;
  printf("f1:\n");
  printf("  &l1=%p\n",&l1);
}
void f2(int i2) {
  int l2 = 2;
  printf("f2:\n");
  printf("  &l2=%p\n",&l2);
  printf("  f2 call f1\n");
  f1(1);
}
int main(int argc, char **argv) {
  printf("main:\n");
  printf("  &g=%p\n",&g);
  printf("  &f1=%p\n",&f1);
  printf("  &f2=%p\n",&f2);
  printf("  &main=%p\n",&main);
  printf("main call f1\n");
  f1(1);
  printf("main call f2\n");
  f2(1);
  return 0;
}
