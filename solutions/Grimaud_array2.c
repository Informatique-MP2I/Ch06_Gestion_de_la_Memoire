#include <stdio.h>
double array[4] = {1.0, 2.0, 3.0, 4.0};
double extra = 42.0;
int main(int argc, char **argv) { 
  double *ptr = array;
  for (int i = 0; i < 4; i++) {
    printf("Adress of array[%d] : %p, value : %f\n",
	   i, (void*)&ptr[i], ptr[i]);
  }
  printf("Adress of extra : %p, value : %f\n", (void*)&extra, extra);
  return 0;
}
