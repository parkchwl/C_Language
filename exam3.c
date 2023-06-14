#include <stdio.h>

int GetFactorial(int num);
double GetMax(double a, double b, double c);

int main()
{
  int result1;
  double result2;

  result1 = GetFactorial(5);
  printf("5! = %d\n", result1);

  result2 = GetMax(0.5, 10.5, 12.5);
  printf("최대값 = %f\n", result2);

  return 0;
}
int GetFactorial(int num)
{
  int i;
  int fact = 1;
  for (i = 1; i <= num; i++)
    fact *= i;
  return fact;
}

double GetMax(double a, double b, double c)
{
  double max;
  max = a > b ? a : b;
  max = c > max ? c : max;
  return max;
}