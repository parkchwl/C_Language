#include <stdio.h>

int main()
{
  int num1;
  printf("");
  scanf("%d", &num1);
  printf("%d\n", num1);

  if (num1 < 0)
    printf("minus\n");

  return 0;
}