#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

char char_at(char *str, int n) {
  if (n < 0 || strlen(str) < n) 
    return '\0';
  return str[n];
}

char *end_of_str(char *str, int n) {
  int len = strlen(str);
  if (n <= 0 || n >= len) 
    return NULL;
  return &str[len - n];
}

char *start_of_str(char *str, int n) {
  int len = strlen(str);
  if (n <= 0 || n > len) 
    return NULL;
  char *result = (char *)malloc((n+1) * sizeof(char));
  assert(result != NULL);
  strncpy(result, str, n);
  result[n] = '\0';
  return result;
}

void cut_str(char *str, int n) {
  int len = strlen(str);
  if (n > 0 && n < len) {
    str[n] = '\0';
  }
  return;
}

char *substring(char *str, int begin, int end) {
  int len = strlen(str);
  if (begin < 0 || end < begin || end >= len)
    return NULL;
  char *result = (char *)malloc((end-begin+2) * sizeof(char));
  assert(result != NULL);
  strncpy(result, str+begin, end-begin+1);
  result[end-begin+1] = '\0';
  return result;
}

int main(int argc, char **argv) {
  char s[] = "Hello world";
  printf("%c\n", char_at(s,4));
  printf("%s\n", end_of_str(s,3));
  //printf("%s\n", end_of_str(s,0));
  //printf("%s\n", end_of_str(s,12));
  //cut_str(s,10);
  //printf("%s\n", s);
  printf("%s\n", start_of_str(s,10));
  printf("%s\n", start_of_str(s,12));
  printf("%s\n", substring(s,3,11));
  return 0; 
}
