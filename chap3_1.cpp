#include <iostream>

using namespace std;

int add(int a, int b)
{
  return a + b;
}

int subtract(int a, int b)
{
  return a - b;
}

int multiply(int a, int b)
{
  return a * b;
}

int divide(int a, int b)
{
  if (b == 0)
  {
    cout << "0으로 나눌 수 없습니다." << endl;
    return 0;
  }
  return a / b;
}

int main()
{
  int a, b;

  cout << "두 정수를 입력하세요 >> ";
  cin >> a >> b;

  cout << "함수 사용하여 계산" << endl;
  cout << "add(" << a << ", " << b << ") = " << add(a, b) << endl;
  cout << "subtract(" << a << ", " << b << ") = " << subtract(a, b) << endl;
  cout << "multiply(" << a << ", " << b << ") = " << multiply(a, b) << endl;
  cout << "divide(" << a << ", " << b << ") = " << divide(a, b) << endl;

  return 0;
}
