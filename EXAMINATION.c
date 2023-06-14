#include <stdio.h> // 리턴 값은 없고, 두개의 인자를 같는 함수의 호출 예

void PrintSumAndAverage(int a, int b)
{
  printf("합계 : %d\n", a + b);
  printf("평균 : %f\n", (double)(a + b) / 2);
}

int main()
{
  int x, y;

  PrintSumAndAverage(10, 20);

  printf("정수를 입력하세요 : ");
  scanf("%d %d", &x, &y);
  PrintSumAndAverage(x, y);

  return 0;
}

#include <stdio.h>

int GetFactorial(int num) // 인자와 리턴 값을 갖는 함수의 호출 예
{

  int i;
  int fact = 1;
  for (i = 1; i <= num; i++)
    fact *= i;
  return fact;
}

int GetSum(int num)
{
  int i;
  int sum = 0;
  for (i = 1; i <= num; i++)
    sum += i;
  return sum;
}

int main()
{
  int result1, result2;

  result1 = GetFactorial(10);
  printf("10 팩토리얼 = %d\n", result1);

  result2 = GetSum(10);
  printf("1~10의 합계 = %d\n", result2);

  return 0;
}

#include <stdio.h>

int GetFactorial(int num);
double GetMax(double a, double b, double c);

int main()
{
  int result1;
  double result2;

  result1 = GetFactorial(5);
  printf("5! = %d\n", result1);

  result2 = GetMax(0.5, 10.5, 12.5);
  printf("최대값 = %f\n", result2);

  return 0;
}
int GetFactorial(int num)
{
  int i;
  int fact = 1;
  for (i = 1; i <= num; i++)
    fact *= i;
  return fact;
}

double GetMax(double a, double b, double c)
{
  double max;
  max = a > b ? a : b;
  max = c > max ? c : max;
  return max;
}

#include <stdio.h> // 서로 다른 함수에서 같은 이름의 변수를 선언하는 경우

void PrintCount();

int main()
{
  int count = 0;

  printf("main : count = %d\n", count);

  return 0;
}

void PrintCount()
{
  int count = 100;
  printf("PrintCount : count = %d\n", count);
}

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

#include <stdio.h> //지역 변수와 전역 변수

void PrintCount();
void Increment();
void Decrement();

int count;

int main()
{
  count = 0;

  PrintCount();
  Increment();
  Increment();
  PrintCount();
  Decrement();
  PrintCount();

  return 0;
}

void PrintCount()
{
  printf("count = %d\n", count);
}

void Increment()
{
  count++;
}

void Decrement()
{
  count--;
}

#include <stdio.h> //함수 사이에 선언된 전역 변수

void PrintCount();
void Increment();
void Decrement();

int count;

int main()
{
  count = 0;

  PrintCount();
  Increment();
  Increment();
  PrintCount();
  Decrement();
  PrintCount();

  return 0;
}

void PrintCount()
{
  printf("count = %d\n", count);
}

void Increment()
{
  count++;
}

void Decrement()
{
  count--;
}

#include <stdio.h> //함수 사이에 선언된 전역변수

void PrintCount();
void Increment();
void Decrement();

int main()
{
  count = 0;

  Increment();
  PrintCount();

  return 0;
}

int count;

void PrintCount()
{
  printf("count = %d\n", count);
}

void Increment()
{
  count++;
}
void Decrement()
{
  count--;
}
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

#include <stdio.h>

#define SIZE 10

int main()
{
  int array[SIZE] = {23, 96, 35, 42, 81, 19, 8, 77, 50, 64};
  int i, j, index;
  int temp;

  for (i = 0; i < SIZE - 1; i++)
  {
    index = i;
    for (j = i + 1; j < SIZE; j++)
    {
      if (array[index] > array[j])
        index = j;
    }
    temp = array[i];
    array[i] = array[index];
    array[index] = temp;
  }

  printf("정렬 결과 : ");
  for (i = 0; i < SIZE; i++)
    printf("%d ", array[i]);
  printf("\n");

  return 0;
}

#include <stdio.h> // 포인터 변수의 선언 및 사용 예

int main()
{
  int x;
  int *p;

  p = &x;
  *p = 10;

  printf("*p = %d\n", *p);
  printf("x = %d\n", x);

  printf("p = %p\n", p);
  printf("&x = %p\n", &x);

  printf("&p = %p\n", &p);

  return 0;
}

#include <stdio.h> //포인터의 더하기 빼기 예

int main()
{
  char ch;
  char *pc = &ch;

  int n;
  int *pi = &n;

  double d;
  double *pd = &d;

  int arr[3];
  int i;

  for (i = 0; i < 3; i++)
    printf("pc+%d = %p\n", i, pc + i);

  for (i = 0; i < 3; i++)
    printf("pi+%d = %p\n", i, pi + i);

  for (i = 0; i < 3; i++)
    printf("pd+%d = %p\n", i, pd + i);

  for (i = 0; i < 5; i++)
    printf("&arr[%d]-&arr[0] = %d\n", i, &arr[i] - &arr[0]);

  return 0;
}

#include <stdio.h> // 포인터로서의 배열의 사용 예

int main()
{
  int arr[5] = {10, 20, 30, 40, 50};
  int i;

  for (i = 0; i < 5; i++)
  {
    printf("&arr[%d] = %p ", i, &arr[i]);
    printf("arr + %d = %p\n", i, arr + i);
  }

  for (i = 0; i < 5; i++)
  {
    printf("arr[%d] = %d, ", i, arr[i]);
    printf("*(arr+%d) = %d\n", i, *(arr + i));
  }
  return 0;
}

#include <stdio.h> //포인터를 배열처럼 사용하는 경우

int main()
{
  int arr[5] = {10, 20, 30, 40, 50};
  int *p = arr;
  int i;

  for (i = 0; i < 5; i++)
  {
    printf("arr+%d = %p, ", i, arr + i);
    printf("p+%d = %p\n", i, p + i);
  }
  for (i = 0; i < 5; i++)
  {
    printf("arr[%d] = %d, ", i, arr[i]);
    printf("p[%d] = %d\n", i, p[i]);
  }

  return 0;
}

#include <stdio.h>
#include <string.h> //product 구조체, student 구조체

struct product
{
  char name[20];
  int price;
  int stock;
};

int main()
{
  struct product prd1;
  struct product prd2 = {"생수 2L", 9500, 20};

  prd1.price = 15000;
  prd1.stock = 30;
  strcpy(prd1.name, "커피믹스");

  printf("%s : %d원, 재고량=%d\n", prd1.name, prd1.price, prd1.stock);
  printf("%s : %d원, 재고량=%d\n", prd2.name, prd2.price, prd2.stock);

  return 0;
}

#include <stdio.h> //point 구조체의 정의 및 사용 예

struct point
{
  int x, y;
};

int main()
{
  struct point pt1, pt2;

  printf("pt1의 x,y 좌표를 입력하세요 : ");
  scanf("%d %d", &pt1.x, &pt1.y);

  printf("pt2의 x,y 좌표를 입력하세요 : ");
  scanf("%d %d", &pt2.x, &pt2.y);

  if (pt1.x == pt2.x && pt1.y == pt2.y)
    printf("두 점의 좌표가 같습니다.\n");

  else
    printf("두 점의 좌표가 다릅니다.\n");

  return 0;
}

#include <stdio.h> //구조체 간의 초기화 및 대입

struct point
{
  int x, y;
};

int main()
{
  struct point pt1 = {10, 20};
  struct point pt2 = {30, 40};
  struct point pt3 = pt1;
  struct point pt4;

  printf("pt1의 좌표 : %d, %d\n", pt1.x, pt1.y);
  printf("pt3의 좌표 : %d, %d\n", pt3.x, pt3.y);
  if (pt1.x == pt3.x && pt1.y == pt3.y)
    printf("pt1과 pt3의 좌표가 같습니다.\n");
  else
    printf("pt1과 pt3의 좌표가 다릅니다.\n");

  pt4 = pt2;

  printf("pt2의 좌표 %d, %d\n", pt2.x, pt2.y);
  printf("pt4의 좌표 : %d, %d\n", pt4.x, pt4.y);
  if (pt2.x == pt4.x && pt2.y == pt4.y)
    printf("pt2와 pt4의 좌표가 같습니다.\n");
  else
    printf("pt2와 pt4의 좌표가 다릅니다.\n");

  return 0;
}