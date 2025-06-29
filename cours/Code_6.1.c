#include <stdio.h>
void swap1(int p, int q){
  int tmp;
  tmp = p;
  p = q;
  q = tmp;
  printf("In the swap1, after the swap: p=%d, q=%d.\n", p, q);
  return;
}
int main(int argc, char** argv){
  int a = 5;
  int b = 2;
  swap1(a, b);
  printf("In the main, after the swap: a=%d, b=%d.\n", a, b); 
  return 0;
}
