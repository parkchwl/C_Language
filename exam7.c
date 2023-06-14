#include <stdio.h> //함수 사이에 선언된 전역 변수

void PrintCount();
void Increment();
void Decrement();

int count;

int main()
{
  count = 0;

  PrintCount();
  Increment();
  Increment();
  PrintCount();
  Decrement();
  PrintCount();

  return 0;
}

void PrintCount()
{
  printf("count = %d\n", count);
}

void Increment()
{
  count++;
}

void Decrement()
{
  count--;
}