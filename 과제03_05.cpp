#include <iostream>
using namespace std;

class Calculator
{
private:
  int a, b;

public:
  void setValue(int x, int y);
  int add();
  int subtract();
  int multiply();
  double divide();
};

void Calculator::setValue(int x, int y)
{
  a = x, b = y;
}

int Calculator::add()
{
  return a + b;
}

int Calculator::subtract()
{
  return a - b;
}

int Calculator::multiply()
{
  return a * b;
}

double Calculator::divide()
{
  if (b == 0)
  {
    cout << "나눗셈의 분모는 0일 수 없습니다." << endl;
    return 0.0;
  }
  return static_cast<double>(a) / b;
}

int main()
{
  Calculator calculator;

  while (true)
  {
    cout << "두 정수와 연산자를 입력하세요 (예 3 + 3) >> ";
    int x, y;
    char c;
    cin >> x >> c >> y;

    switch (c)
    {
    case '+':
      calculator.setValue(x, y);
      cout << "덧셈 결과: " << calculator.add();
      break;
    case '-':
      calculator.setValue(x, y);
      cout << "뺄셈 결과: " << calculator.subtract();
      break;
    case '*':
      calculator.setValue(x, y);
      cout << "곱셈 결과: " << calculator.multiply();
      break;
    case '/':
      calculator.setValue(x, y);
      cout << "나눗셈 결과: " << calculator.divide();
      break;
    default:
      cout << "지원하지 않는 연산자입니다.";
    }
    cout << endl;
  }

  return 0;
}
