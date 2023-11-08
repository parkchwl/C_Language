#include <iostream>
using namespace std;

int main()
{
  cout << "입력할 정수의 개수는?>>"; // 프롬프트 출력

  int n;
  cin >> n;

  if (n <= 0)
    return 0;
  int *p = new int[n]; // 크기 n개의 정수형 배열의 동적 할당.

  if (!p)
  {
    cout << "메모리를 할당할 수 없습니다."; // p가 NULL이면 메모리 할당 실패
    return 0;
  }

  for (int i = 0; i < n; i++)
  {
    cout << i + 1 << "번째 정수: ";
    cin >> p[i];
  }

  int sum = 0;

  for (int i = 0; i < n; i++)
  {
    sum += p[i]; // 합계 계산
  }

  cout << "평균= " << sum / n << endl; // 평균값 출력
  delete[] p;                          // 배열 메모리 반환
  return 0;
}