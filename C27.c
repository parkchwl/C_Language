#include <stdio.h>

int main()
{
  int kor, eng, math, com;
  int sum, avg;

  printf("");
  scanf("%d %d %d %d", &kor, &eng, &math, &com);

  sum = kor + eng + math + com;
  avg = sum / 4;

  printf("sum %d\n", sum);
  printf("avg %d\n", avg);

  return 0;
}