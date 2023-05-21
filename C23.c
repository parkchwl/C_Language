#include <stdio.h>

int main()
{
  int a, b, c;

  printf("");
  scanf("%d %d %d", &a, &b, &c);

  printf("%d %d %d %d\n", (a > b) ? 1 : 0, (b >= c) ? 1 : 0, (a <= b) ? 1 : 0, (b < c) ? 1 : 0);

  return 0;
}