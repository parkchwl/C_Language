#include <stdio.h>
int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int *p = arr;
  int i;
  for (i = 0; i < 5; i++)
  {
    printf("%d ", ++(*p));
    p++;
  }
  printf("\n");
}