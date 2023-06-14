#include <stdio.h> // 정수형 배열의 합계와 평균 구하기

#define MAX 5

int main()
{
  int arr[MAX] = {0};
  int i;
  int sum;
  double average;

  printf("%d개의 정수를 입력하세요 : ", MAX);
  for (i = 0; i < MAX; i++)
    scanf("%d", &arr[i]);

  for (i = 0, sum = 0; i < MAX; i++)
    sum += arr[i];

  average = (double)sum / (double)MAX;
  printf("합계 : %d, 평균 : %5.2f\n", sum, average);

  return 0;
}