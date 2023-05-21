#include <stdio.h>

int main()
{
  int a, b = 0;

  printf("");
  scanf("%d", &a);

  b = a;

  printf("%d\n", b++);
  printf("%d\n", ++b);
  return 0;
}