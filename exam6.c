#include <stdio.h> //지역 변수와 전역 변수

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
