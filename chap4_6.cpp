#include <iostream>
using namespace std;

int main()
{
  int numbers[5];
  int maxNumber = INT_MIN;

  cout << "숫자를 입력하세요: ";

  for (int i = 0; i < 5; i++)
  {
    cin >> numbers[i];

    if (numbers[i] > maxNumber)
    {
      maxNumber = numbers[i];
    }
  }

  cout << "가장 큰 수는 " << maxNumber << "입니다." << endl;

  return 0;
}
