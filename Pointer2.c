#include <stdio.h>

int main()
{
  int a = 10;
  int *p = &a;

  int *q = NULL;
  int *r = 0;

  printf("p = %p\n", p);
  printf("q = %p\n", q);
  printf("r = %p\n", r);
}