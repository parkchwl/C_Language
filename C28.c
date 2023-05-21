#include <stdio.h>

int main()
{
  int minsuHeight, minsuWeight;
  int KeyHeight, KeyWeight;

  printf("");
  scanf("%d %d", &minsuHeight, &minsuWeight);
  scanf("%d %d", &KeyHeight, &KeyWeight);

  printf("%d\n", (minsuHeight > KeyHeight) && (minsuWeight > KeyWeight));

  return 0;
}