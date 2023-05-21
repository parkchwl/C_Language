#include <stdio.h>

int main()
{
  int a, b, c = 0;
  scanf("%d %d %d", &a, &b, &c);
  int sum = a + b + c;
  int avg = sum / 3;

  printf("sum : %d\n", sum);
  printf("avg : %d\n", avg);

  return 0;
}