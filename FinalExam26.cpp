#include <iostream>
using namespace std;

int maximum(int x, int y, int z);

int main()
{
  int num1, num2, num3;

  cout << "3개의 정수를 입력하시오 >> ";
  cin >> num1 >> num2 >> num3;

  int maxNum = maximum(num1, num2, num3);

  cout << "가장 큰 정수는 " << maxNum << endl;

  return 0;
}

int maximum(int x, int y, int z)
{
  int maxVal = x;

  if (y > maxVal)
  {
    maxVal = y;
  }

  if (z > maxVal)
  {
    maxVal = z;
  }

  return maxVal;
}
