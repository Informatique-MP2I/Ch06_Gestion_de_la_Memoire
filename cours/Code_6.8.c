#include <stdio.h>
#include <string.h>
int main(int argc, char **argv){
  char *s1 = "Hello world";
  char s2[12] = "Hello world";
  char *s3 = "Jello world"; /* Que. Fruit-flavored jelly. */
  printf("Résultat de s1==s2 : %d\n", s1==s2);
  printf("Résultat de s1==s3 : %d\n", s1==s3);
  printf("Comparaison de s1 et s2 : %d\n", strcmp(s1,s2));
  printf("Comparaison de s1 et s3 : %d\n", strcmp(s1,s3));
  printf("Comparaison de s3 et s1 : %d\n", strcmp(s3,s1));
  return 0;
}
