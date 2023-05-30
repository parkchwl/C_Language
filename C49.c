#include <stdio.h>

int get_sum_average(const int arr[], int size, double *average)
{
  int sum, i;
  for (i = 0, sum = 0; i < size; i++)
    sum += arr[i];
  if (average != NULL)
    *average = (double)sum / size;
  return sum;
}

int main()
{
  int scores[5] = {98, 99, 78, 85, 91};
  double ave;
  printf("합계 : %d\n", get_sum_average(scores, 5, &ave));
  printf("평균 : %.2f\n", ave);
  return 0;
}
