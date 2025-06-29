#include <stdio.h>
int main(int argc, char **argv) {
  char tc[10]={'Z','Y','X','W','V','U','T','S','R','Q'};
  char *p_c1=&tc[0];
  char *p_c2=&tc[1];
  char *p_c3=&tc[3];
  printf("&tc[0], p_c1 : %p\n", p_c1);
  printf("&tc[1], p_c2 : %p\n", p_c2);
  printf("&tc[3], p_c3 : %p\n", p_c3);
  printf("p_c1+0 : %p\n", p_c1+0);
  printf("p_c1+1 : %p\n", p_c1+1);
  printf("p_c1+3 : %p\n", p_c1+3);
  printf("tc[3]='%c', *(p_c1+3)='%c'\n\n", tc[3], *(p_c1+3));
  int ti[10]={47,48,49,50,51,52,53,54,55,56};
  int *p_i1=&ti[0];
  int *p_i2=&ti[1];
  int *p_i3=&ti[3];
  printf("ti[0], p_i1 : %p\n", p_i1);
  printf("ti[1], p_i2 : %p\n", p_i2);
  printf("ti[3], p_i3 : %p\n", p_i3);
  printf("p_i1+0 : %p\n", p_i1+0);
  printf("p_i1+1 : %p\n", p_i1+1);
  printf("p_i1+3 : %p\n", p_i1+3);
  printf("ti[3]=%d, *(p_i1+3)=%d\n\n", ti[3], *(p_i1+3));
  return 0;
}
