#include <stdio.h>
#include <stdlib.h>
double array[4] = {1.0, 2.0, 3.0, 4.0};
double extra = 42.0;
int main(int argc, char **argv) {
  if (argc < 2) {
    printf("Usage : %s <index>\n", argv[0]);
    return 1;
  }
  int index = atoi(argv[1]);
  printf("Value of array[%d] : %f\n", index, array[index]);
  return 0;
}
