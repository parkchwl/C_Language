#include <stdio.h> // 포인터 변수의 선언 및 사용 예

int main()
{
  int x;
  int *p;

  p = &x;
  *p = 10;

  printf("*p = %d\n", *p);
  printf("x = %d\n", x);

  printf("p = %p\n", p);
  printf("&x = %p\n", &x);

  printf("&p = %p\n", &p);

  return 0;
}