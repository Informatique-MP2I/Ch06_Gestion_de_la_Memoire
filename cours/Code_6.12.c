#include <stdio.h>
const int nb_rec = 3;
int g=7;
void rec(int deep) {
  int l=8;
  if (deep == 0) {
    printf("X> rec(%d):",deep);
    printf("&g=%p,&l=%p\n",&g,&l);
    return;
  }
  printf("-> rec(%d):",deep);
  printf("&g=%p,&l=%p\n",&g,&l);
  rec(deep-1);
  printf("<- rec(%d):",deep);
  printf("&g=%p,&l=%p\n",&g,&l);   
  return;
}
int main(int argc, char **argv) {
  int l=9;
  printf("-> main():");
  printf("&g=%p,&l=%p\n",&g,&l);
  rec(nb_rec);
  return 0;
}
