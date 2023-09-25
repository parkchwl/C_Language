#include <iostream>

using namespace std;

int main()
{
  int numbers[5];
  cout << "5개의 정수를 입력하세요: ";

  for (int i = 0; i < 5; ++i)
  {
    cin >> numbers[i];
  }

  int maxNumber = numbers[0];

  for (int i = 1; i < 5; ++i)
  {
    if (numbers[i] > maxNumber)
    {
      maxNumber = numbers[i];
    }
  }

  cout << "입력된 정수 중에서 가장 큰 수는 " << maxNumber << "입니다." << endl;

  return 0;
}
