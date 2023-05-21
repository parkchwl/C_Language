#include <stdio.h>
#include <math.h>

int main()
{
  double num1, num2, num3;

  printf("");
  scanf("%lf", &num1);

  printf("");
  scanf("%lf", &num2);

  printf("");
  scanf("%lf", &num3);

  num1 = round(num1 * 1000) / 1000.0;
  num2 = round(num2 * 1000) / 1000.0;
  num3 = round(num3 * 1000) / 1000.0;

  printf("%.3lf\n", num1);
  printf("%.3lf\n", num2);
  printf("%.3lf\n", num3);

  return 0;
}