#include <stdio.h>

int main()
{
  double a, b;
  printf("두 개의 실수를 입력하시오.\n");
  scanf("%lf", &a);
  scanf("%lf", &b);

  printf("x = %.2lf\n", a);
  printf("y = %.2lf\n", b);

  return 0;
}