#include <stdio.h>

int main()
{
  char str[3];

  printf("문자열 입력:");
  scanf("%s", str, 3);

  printf("%s", str);

  return 0;
}