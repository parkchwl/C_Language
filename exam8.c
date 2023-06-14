#include <stdio.h> //함수 사이에 선언된 전역변수

void PrintCount();
void Increment();
void Decrement();

int main()
{
  count = 0;

  Increment();
  PrintCount();

  return 0;
}

int count;

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