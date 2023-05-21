#include <stdio.h>
#include <math.h>

int main()
{
  int num1 = 50;
  double num2 = 100.12;

  int result = round(num1 * num2);

  printf("%.2lf * %d = %d\n", num2, num1, result);

  return 0;
}