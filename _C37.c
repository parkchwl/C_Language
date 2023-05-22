#include <stdio.h>
#define ARR_SIZE 5

// 여기 변수 선언 왜 이렇게 했는지?..
unsigned int absolute(int x)
{
  return x > 0 ? x : -x;
}

int main()
{
  int x[ARR_SIZE] = {-4, 0, 28, 3, -12};
  unsigned int y[ARR_SIZE] = {0};
  int i;

  for (i = 0; i < ARR_SIZE; i++)
    y[i] = absolute(x[i]);

  for (i = 0; i < ARR_SIZE; i++)
    printf("%d ", y[i]);
  printf("\n");
}