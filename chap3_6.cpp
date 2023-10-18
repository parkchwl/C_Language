#include <iostream>
using namespace std;

int main()
{
  const int size = 10;
  int numbers[size];

  cout << "정수 " << size << "개를 차례대로 입력하시오 >> ";
  for (int i = 0; i < size; i++)
  {
    cin >> numbers[i];
  }

  int max = numbers[0];
  int min = numbers[0];

  for (int i = 1; i < size; i++)
  {
    if (numbers[i] > max)
    {
      max = numbers[i];
    }
    if (numbers[i] < min)
    {
      min = numbers[i];
    }
  }

  cout << "배열 :";
  for (int i = 0; i < size; i++)
  {
    cout << " " << numbers[i];
  }
  cout << endl;

  cout << "최대값 : 인덱스=" << max << ", 값=" << max << endl;
  cout << "최소값 : 인덱스=" << min << ", 값=" << min << endl;

  return 0;
}
