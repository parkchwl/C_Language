#include <stdio.h>

int main()
{
  int num1, num2;
  int result;

  printf("");
  scanf("%d %d", &num1, &num2);

  --num2;

  result = num1 * num2;
  num1++;

  printf("%d %d %d", num1, num2, result);

  return 0;
}