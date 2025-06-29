#include <stdio.h>

int find_min(int *t, int n) {
  if (t==NULL || n <= 0)
    return -1; // Error value
  int min = t[0];
  for (int i = 1; i < n; i++)
    if (t[i] < min)
      min = t[i];
  return min;
}

int main(int argc, char **argv) {
  int t1[] = {34, 15, 88, 2, 55};
  int t2[] = {5, 3, 6, 1, 4};
  int t3[] = {10, 20, 30};
  printf("Minimum in t1: %d\n", find_min(t1, 5));
  printf("Minimum in t2: %d\n", find_min(t2, 5));
  printf("Minimum in t3: %d\n", find_min(t3, 3));
  return 0;
}
