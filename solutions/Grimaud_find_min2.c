#include <stdio.h>
#include <stdlib.h>

int find_min(int *t, int n) {
  if (t==NULL || n <= 0)
    return -1; // Error value
  int min = t[0];
  for (int i = 1; i < n; i++)
    if (t[i] < min)
      min = t[i];
  return min;
}

int main(int argc, char *argv[]) {
  if (argc < 2){
    printf("Usage : %s <v1> <v2> ... <vn>\n",argv[0]);
    return -1;
  }
  int n = argc - 1;
  int t[n];
  for (int i = 0; i < n; i++) 
    t[i] = atoi(argv[i + 1]);
  printf("The minimum value is %d.\n", find_min(t, n));
  return 0;
}
