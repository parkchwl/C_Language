#include <stdio.h>

int main()
{
  int num1, num2;

  printf("");
  scanf("%d %d", &num1, &num2);

  printf("%d > %d --- %d\n", num1, num2, (num1 > num2) ? 1 : 0);
  printf("%d < %d --- %d\n", num1, num2, (num1 < num2) ? 1 : 0);
  printf("%d >= %d --- %d\n", num1, num2, (num1 >= num2) ? 1 : 0);
  printf("%d <= %d --- %d\n", num1, num2, (num1 <= num2) ? 1 : 0);
  return 0;
}
