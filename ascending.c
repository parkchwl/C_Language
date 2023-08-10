#include <stdio.h>
#define SIZE 5

void print_array(int arr[], int size) // 배열의 원소를 출력하는 함수
{
  int i;
  for (i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int main()
{
  int data[SIZE] = {52, 31, 28, 17, 46};
  int i, j, temp;
  int index_min;

  for (i = 0; i < SIZE - 1; i++)
  { // 0 ~ (i-1)까지는 정렬된 상태이다.
    index_min = i;
    for (j = i + 1; j < SIZE; j++)
    {
      // data[i] ~ data[SIZE - 1]중에서 가장 작은 원소의 인덱스를 찾는다.
      if (data[index_min] > data[j]) // 오름차순 정렬
        index_min = j;
    }
    if (i != index_min)
    {
      temp = data[i];
      data[i] = data[index_min];
      data[index_min] = temp;
    } // data[i]가 i번째로 작은 값이 된다.

    printf("i = %d 일때 정렬 결과 : ", i);
    print_array(data, SIZE);
  }
}