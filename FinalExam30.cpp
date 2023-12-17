#include <iostream>
using namespace std;

int main()
{
  int n;

  cout << "입력할 정수의 개수? >> ";
  cin >> n;

  int *numbers = new int[n];

  cout << "정수를 입력하시오" << endl;
  for (int i = 0; i < n; ++i)
  {
    cout << i + 1 << "번째 : ";
    cin >> numbers[i];
  }

  cout << "입력된 정수는 >> ";
  for (int i = 0; i < n; ++i)
  {
    cout << numbers[i] << " ";
  }
  cout << endl;

  int sum = 0;
  for (int i = 0; i < n; ++i)
  {
    sum += numbers[i];
  }

  double average = static_cast<double>(sum) / n;

  cout << "합계 = " << sum << endl;
  cout << "평균 = " << average << endl;

  delete[] numbers;

  return 0;
}
