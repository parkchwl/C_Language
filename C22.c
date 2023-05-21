#include <stdio.h>

int main()
{
  int a, b;

  printf("");
  scanf("%d %d", &a, &b);

  printf("%d\n", (a == b) ? 1 : 0);
  printf("%d\n", (a != b) ? 1 : 0);

  return 0;
}