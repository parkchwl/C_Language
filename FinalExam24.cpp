#include <iostream>
using namespace std;

int main()
{
  int num1, num2, num3;

  cout << "3개의 정수를 입력하시오 >> ";
  cin >> num1 >> num2 >> num3;

  if (num1 >= num2 && num1 >= num3)
  {
    cout << "가장 큰 정수는 " << num1 << endl;
  }
  else if (num2 >= num1 && num2 >= num3)
  {
    cout << "가장 큰 정수는 " << num2 << endl;
  }
  else
  {
    cout << "가장 큰 정수는 " << num3 << endl;
  }

  return 0;
}
