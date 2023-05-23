#include <stdio.h>

int main()
{
  double values[] = {0.5, 0.125, 0.75, 1.05, 2.25, 3.75};
  int count = sizeof(values) / sizeof(values[0]);
  int i;
  for (i = 0; i < count; i++)
    printf("%f, values[i]");
}