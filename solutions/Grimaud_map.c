#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

double absd(double x) {
  return (x < 0) ? -x : x;
}

double *map_array(double f(double), double *t, int n) {
  if (t == NULL || n == 0)
    return NULL;
  double *r = (double *)malloc(n * sizeof(double));
  assert(r!=NULL);
  for(int i = 0; i < n; i++)
    r[i] = f((double)t[i]);
  return r;
}

int main(int argc, char **argv) {
  double t[5] = {-M_PI, -M_PI/2, 0, M_PI/2, M_PI};
  int n = 5;
  double *r1 = map_array(absd,t,n);
  double *r2 = map_array(cos,t,n);
  for(int i=0;i<n;i++) {
    printf("r1[%d]=%f, r2[%d]=%f\n", i, r1[i], i, r2[i]);
  }
  return 0;
}
