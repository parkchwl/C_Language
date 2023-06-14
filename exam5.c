#include <stdio.h>

void TestLocal();

int main()
{
  TestLocal();
  TestLocal();

  return 0;
}

void TestLocal()
{
  int num = 0;

  printf("num = %d\n", num++);
}