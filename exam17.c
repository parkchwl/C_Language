#include <stdio.h> //포인터를 배열처럼 사용하는 경우

int main()
{
  int arr[5] = {10, 20, 30, 40, 50};
  int *p = arr;
  int i;

  for (i = 0; i < 5; i++)
  {
    printf("arr+%d = %p, ", i, arr + i);
    printf("p+%d = %p\n", i, p + i);
  }
  for (i = 0; i < 5; i++)
  {
    printf("arr[%d] = %d, ", i, arr[i]);
    printf("p[%d] = %d\n", i, p[i]);
  }

  return 0;
}