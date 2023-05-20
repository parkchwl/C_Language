#include <stdio.h>

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int *p = &arr[0]; // p는 arr[0]을 가르킨다.
  int i;

  for (i = 0; i < 5; i++, p++) // for가 수행되는 동안 p는 arr[0]~arr[4]를 가리킨다.
  {
    printf("p = %p, ", p); // p가 가리키는 원소가 계속 바뀐다.
    printf("*p = %d\n", *p);
  }
}