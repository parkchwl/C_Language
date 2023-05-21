#include <stdio.h>

int main()
{
  int num1;

  printf("");
  scanf("%d", &num1);

  printf("%d\n", num1);
  if (num1 > 10)
    printf("10보다 큰 수를 입력하셨습니다.\n");

  return 0;
}