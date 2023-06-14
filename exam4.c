#include <stdio.h> // 서로 다른 함수에서 같은 이름의 변수를 선언하는 경우

void PrintCount();

int main()
{
  int count = 0;

  printf("main : count = %d\n", count);

  return 0;
}

void PrintCount()
{
  int count = 100;
  printf("PrintCount : count = %d\n", count);
}