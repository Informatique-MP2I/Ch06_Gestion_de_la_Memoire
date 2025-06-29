#include <stdio.h>
int g=7;
int main(int argc, char **argv) {
  int l=8;  
  printf("&l    : %p \n", &l);
  printf("&g    : %p \n", &g);
  printf("&main : %p \n", &main);
  return 0;
}
