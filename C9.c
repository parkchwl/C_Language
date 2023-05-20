#include <stdio.h>

int main()
{
  double num1, num2;
  char ch;

  scanf("%lf", &num1);
  scanf("%lf", &num2);
  scanf(" %c", &ch);

  printf("%.2lf\n", num1);
  printf("%.2lf\n", num2);
  printf("%c\n", ch);

  return 0;
}