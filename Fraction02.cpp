#include <iostream>
using namespace std;

class Fraction
{
  int num;   // 분자
  int denom; // 분모

public:
  Fraction(int n = 1, int d = 1) : num(n), denom(d)
  {
    while (denom == 0)
    {
      cout << "입력오류!! 분모는 0이 될 수 없습니다.\n다시입력하세요!!\n";
      cout << "분자, 분모순으로 입력: ";
      cin >> num >> denom;
    }
  }

  // 연산자 함수 선언
  Fraction operator+(const Fraction &other) const;
  bool operator==(const Fraction &other) const;
  Fraction operator^(int power) const;
  Fraction operator++(int); // 후위 연산
  Fraction &operator*=(const Fraction &other);

  // 프렌드 함수 선언
  friend istream &operator>>(istream &in, Fraction &fraction);
  friend ostream &operator<<(ostream &out, const Fraction &fraction);
  friend bool operator<(const Fraction &f1, const Fraction &f2);
  friend Fraction operator/(int num, const Fraction &fraction);
  friend Fraction operator~(const Fraction &fraction);
  friend Fraction operator--(Fraction &fraction);
};

// 연산자 함수 구현
Fraction Fraction::operator+(const Fraction &other) const
{
  int newNum = num * other.denom + other.num * denom;
  int newDenom = denom * other.denom;
  return Fraction(newNum, newDenom);
}

bool Fraction::operator==(const Fraction &other) const
{
  return (num * other.denom == other.num * denom);
}

Fraction Fraction::operator^(int power) const
{
  int newNum = 1;
  int newDenom = 1;
  for (int i = 0; i < power; ++i)
  {
    newNum *= num;
    newDenom *= denom;
  }
  return Fraction(newNum, newDenom);
}

Fraction Fraction::operator++(int)
{
  Fraction temp = *this;
  num += denom;
  return temp;
}

Fraction &Fraction::operator*=(const Fraction &other)
{
  num *= other.num;
  denom *= other.denom;
  return *this;
}

// 프렌드 함수 구현
istream &operator>>(istream &in, Fraction &fraction)
{
  cout << "분자, 분모순으로 입력: ";
  in >> fraction.num >> fraction.denom;

  while (fraction.denom == 0)
  {
    cout << "입력오류!! 분모는 0이 될 수 없습니다.\n다시입력하세요!!\n";
    cout << "분자, 분모순으로 입력: ";
    in >> fraction.num >> fraction.denom;
  }

  return in;
}

ostream &operator<<(ostream &out, const Fraction &fraction)
{
  out << fraction.num << "/" << fraction.denom;
  return out;
}

bool operator<(const Fraction &f1, const Fraction &f2)
{
  return (f1.num * f2.denom < f2.num * f1.denom);
}

Fraction operator/(int num, const Fraction &fraction)
{
  return Fraction(num * fraction.denom, fraction.num);
}

Fraction operator~(const Fraction &fraction)
{
  return Fraction(fraction.denom, fraction.num);
}

Fraction operator--(Fraction &fraction)
{
  fraction.num -= fraction.denom;
  return fraction;
}

int main()
{
  Fraction f1, f2, f3, f4(7, 15), f5(6, 15);

  cin >> f1 >> f2;

  f3 = f1 + f2; // 분수 + 분수
  cout << f1 << " + " << f2 << " = " << f3 << "\n\n";

  if (f2 == f5)
    cout << f2 << " == " << f5 << "\n\n";
  if (f2 == f4)
    cout << f2 << " == " << f4 << "\n\n";

  if (f2 < f1)
    cout << f2 << " < " << f1 << "\n\n";

  f1 *= f2; // 분수 *= 분수
  cout << "f1 *= f2 ===> f1 = " << f1 << "\n\n";

  f3 = f2 ^ 3; // 분수 ^ 정수 (분수의 정수 제곱승)
  cout << "( " << f2 << " )^3 = " << f3 << "\n\n";

  f3 = 5 / f2; // 정수 / 분수
  cout << "5 / (" << f2 << ") = " << f3 << "\n\n";

  f3 = ~f2; // ~ 분수(분수의 역수 계산)
  cout << "~( " << f2 << " ) = " << f3 << "\n\n";

  cout << "(" << f1 << ")++ = ";
  f4 = f1++;
  cout << f1 << "\n";
  cout << "후위 연산 수행 후, f4 = " << f4 << "\n\n";

  cout << "--(" << f2 << ") = ";
  f4 = --f2;
  cout << f2 << "\n";
  cout << "전위 연산 수행 후, f4 = " << f4 << "\n\n";

  return 0;
}
