#include <stdio.h>

void GetSmallerAndLarger(int a, int b, int smaller, int larger);

int main()
{
  int smaller = 0, larger = 0;

  GetSmallerAndLarger(10, 20, smaller, larger);

  return 0;
}

void GetSmallerAndLarger(int a, int b, int smaller, int larger)
{
  smaller = a < b ? a : b;
  larger = a > b ? a : b;
}