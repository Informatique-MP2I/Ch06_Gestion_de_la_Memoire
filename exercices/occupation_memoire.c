int main(int argc, char **argv) {
  int v = 10;
  int w = 5;
  int tab[3] = {77,78,79};
  int *ptr;
  tab[0] = 2*v;
  tab[1] = 3*w;
  ptr = &tab[2];
  ptr = &v;
  *ptr = 7;
  ptr = &w;
  tab[2]=(*ptr)+8;
  return 0;
}
