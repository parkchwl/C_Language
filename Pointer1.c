#include <stdio.h>

int main()
{
  int *pi;
  double *pd;
  char *pc;

  printf("sizeof(pi) = %d\n", sizeof(pi));
  printf("sizeof(pd) = %d\n", sizeof(pd));
  printf("sizeof(pc) = %d\n", sizeof(pc));

  printf("sizeof(pc) = %d\n", sizeof(int *));
  printf("sizeof(pc) = %d\n", sizeof(double *));
  printf("sizeof(pc) = %d\n", sizeof(char *));
  return 0;
}