#include <stdio.h>

int main()
{
  int arr[5];
  int size = 0;
  int i;

  printf("배열의 바이트 크기는 ? %d입니다.", sizeof(arr));

  size = sizeof(arr) / sizeof(arr[0]);
  printf("배열의 크기: %d\n", size);

  for (i = 0; i < size; i++)
    arr[i] = 0;

  for (i = 0; i < size; i++)
    printf("%d ", arr[i]);

  printf("\n");
}