#include <stdio.h>
#include <math.h>

double mean(double *x, int n) {
  double sum = 0.0;
  for (int i = 0; i < n; i++) 
    sum = sum + x[i];
  return sum / n;
}

double variance(double *x, int n) {
  double m = mean(x, n);
  double sum = 0.0;
  for (int i = 0; i < n; i++) 
    sum += (x[i] - m) * (x[i] - m);
  return sum / n;
}

double covariance(double *x, double *y, int n) {
  double mean_x = mean(x, n);
  double mean_y = mean(y, n);
  double sum = 0.0;
  for (int i = 0; i < n; i++) 
    sum += (x[i] - mean_x) * (y[i] - mean_y);
  return sum / n;
}

double correlation(double *x, double *y, int n) {
  return covariance(x,y,n)/sqrt(variance(x,n)*variance(y,n));
}

int main(int argc, char **argv) {
  double x[] = {2.3, 4.5, 6.7, 8.9, 10.2, 12.9};
  double y[] = {1.1, 3.4, 5.6, 7.8, 9.0, 10.1};
  int n = 6;
  double rho = correlation(x,y,n);
  printf("Correlation coefficient of x and y : %f.\n", rho);
}
