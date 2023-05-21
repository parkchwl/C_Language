#include <stdio.h>

int main()
{

  int num[5];
  int result[5];
  printf("5개의 수를 입력하시오. ");
  scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);

  result[0] = num[0] + 3;
  result[1] = num[1] - 3;
  result[2] = num[2] * 3;
  result[3] = num[3] / 3;
  result[4] = num[4] % 3;

  printf("%d %d %d %d %d\n", result[0], result[1], result[2], result[3], result[4]);

  return 0;
}