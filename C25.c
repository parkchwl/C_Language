#include <stdio.h>

int main()
{
  int a = 0, b = 1, c = 2;

  printf("%d", (a && b));
  printf("%d", (a || b));
  printf("%d", (b && c));
  printf("%d\n", !a);

  return 0;
}