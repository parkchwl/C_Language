#include <stdio.h>

int main()
{
  int a, b = 0;

  printf("정수형 변수 입력해줘.");
  scanf("%d", &a);

  b = a;

  printf("%d\n", b++);
  printf("%d\n", ++b);
  return 0;
}