#include <stdio.h>
#include <string.h>

void print_two_strings(char **args) {
  printf("x:'%s' y:'%s'\n", args[0], args[1]);
}

void swap_str(char **x, char **y) {
  char *temp = *x;
  *x = *y;
  *y = temp;
}

void minmax_str(char **x, char **y) {
  if(strcmp(*x, *y) > 0)
    swap_str(x, y);
}

int main(int argc, char **argv) {
  if (argc != 3) {
    printf("Usage : %s \"<string1>\" \"<string2>\"\n", argv[0]);
    return 1;
  }
  print_two_strings(&argv[1]);
  swap_str(&argv[1], &argv[2]);
  print_two_strings(&argv[1]);
  minmax_str(&argv[1], &argv[2]);
  print_two_strings(&argv[1]);
  return 0;
}
