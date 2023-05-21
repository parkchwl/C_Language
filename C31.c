#include <stdio.h>

int main()
{
  int num1, num2;

  printf("");
  scanf("%d %d", &num1, &num2);

  if (num1 > num2)
  {
    printf("입력받은 수 중 큰 수는 %d이고 작은 수는 %d입니다.\n", num1, num2);
  }
  else
  {
    printf("입력받은 수 중 큰 수는 %d이고 작은 수는 %d입니다.\n", num2, num1);
  }
  return 0;
}