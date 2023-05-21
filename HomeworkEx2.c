#include <stdio.h>
#define MAX 50

int getArray(int p[]);
void printArray(const int p[], int size);
double computeAverage(const int p[], int size);
void copySquareArray(int p1[], const int p2[], int size);
void swapArray(int p1[], int p2[], int size);
// [1] 지역 변수의 선언이 아닌가?
int getArray(int p[])
{
  int size;
  printf("몇개의 정수를 입력하시겠습니까? ");
  scanf("%d", &size);

  printf("%d개의 정수 입력: ", size);
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &p[i]);
  }

  return size;
}
// [2] 왜 return 값이 size인가 ?

void printArray(const int p[], int size)
// [3] void ~ 로 함수 선언을 하는 이유가 있는가 ?
{
  printf("{");
  // [4] 이거 좀 잘못된 것 같은데.. 최적의 코드가 있는 것인가?
  for (int i = 0; i < size; i++)
  {
    printf("%d", p[i]);
    if (i < size - 1)
    {
      printf(", ");
    }
  }
  printf("}\n");
}

double computeAverage(const int p[], int size)
{
  double sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += p[i];
  }
  return sum / size;
}

void copySquareArray(int p1[], const int p2[], int size)
{
  for (int i = 0; i < size; i++)
  {
    p1[i] = p2[i] * p2[i];
  }
}

void swapArray(int p1[], int p2[], int size)
{
  int temp[MAX];

  for (int i = 0; i < size; i++)
  {
    temp[i] = p1[i];
    p1[i] = p2[i];
    p2[i] = temp[i];
  }
}

int main()
{
  int arr1[MAX], arr2[MAX];
  double average;
  int no;

  no = getArray(arr1);

  printf("\narr1 = ");
  printArray(arr1, no);

  average = computeAverage(arr1, no);
  printf("arr1의 평균 : %g\n", average);

  copySquareArray(arr2, arr1, no);
  printf("\n==== squareArray() 함수 호출후 ======\n");
  printf("arr2 = ");
  printArray(arr2, no);

  swapArray(arr1, arr2, no);
  printf("\n==== swapArray() 함수 호출후 ======\n");
  printf("arr1 = ");
  printArray(arr1, no);
  printf("arr2 = ");
  printArray(arr2, no);

  return 0;
}
