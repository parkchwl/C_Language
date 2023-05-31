#include <stdio.h>

void test1(int x) // 매개변수 x는 함수가 호출될 때 main의 x로 초기화된다.
{

  x = 20;
}

void test2(int *p)
{
  *p = 20;
}

int main()
{
  int x = 10;
  test1(x);
  printf("test1 호출 후 x = %d\n", x);

  test2(&x);
  printf("test2 호출 후 x = %d\n", x);
}