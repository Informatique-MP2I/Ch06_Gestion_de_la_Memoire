#include <stdio.h>
int main(int argc, char **argv) {
  int tab[5] = {37,38,39,40,41};
  int *ptr=tab;
  printf("tab    : %p\n", tab);
  printf("&tab[0]: %p\n", &tab[0]);
  printf("ptr    : %p\n", ptr);
  for(int i=0;i<=5;i++) {
    printf("tab[%d]: %d\n",i,tab[i]);
    printf("ptr[%d]: %d\n",i,ptr[i]);
  }
  return 0;
}
