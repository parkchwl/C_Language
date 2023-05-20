#include <stdio.h>

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int *p = arr; // 배열 이름은 배열의 시작 주소
  int i;

  for (i = 0; i < 5; i++)
    printf("p[%d] = %d\n", i, p[i]);
}