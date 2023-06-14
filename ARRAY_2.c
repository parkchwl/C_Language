#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
  char str[] = "This is sample string for test.";
  int len = strlen(str);
  int num;
  printf("몇 개? ");
  scanf("%d", &num);

  if (num > len)
    num = len;

  str[len - num] = '\0';
  puts(str);
}