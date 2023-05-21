#include <stdio.h>

int main()
{
  int a, b, result1, result2 = 0;

  printf("");
  scanf("%d %d", &a, &b);

  result1 = a + 100;
  result2 = b % 10;

  printf("%d %d", result1, result2);
  return 0;
}