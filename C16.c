#include <stdio.h>

int main()
{
  int num1, num2;
  printf("두 개의 수를 입력하시오. ");
  scanf("%d %d", &num1, &num2);

  int sum = num1 + num2;
  int min = num1 - num2;
  int multi = num1 * num2;
  int div = num1 / num2;
  int fer = num1 % num2;

  printf("%d + %d = %d\n", num1, num2, sum);
  printf("%d - %d = %d\n", num1, num2, min);
  printf("%d * %d = %d\n", num1, num2, multi);
  printf("%d / %d = %d\n", num1, num2, div);
  printf("%d % %d = %d\n", num1, num2, fer);

  return 0;
}