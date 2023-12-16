#include <iostream>
using namespace std;

class Complex
{
  int real;      // 실수부
  int imaginary; // 허수부
public:
  Complex() { real = imaginary = 0; }
  Complex(int r, int i)
  {
    real = r;
    imaginary = i;
  }

  Complex operator+(const Complex &op2)
  {
    return Complex(real + op2.real, imaginary + op2.imaginary);
  }

  Complex operator*(const Complex &op2)
  {
    int newReal = real * op2.real - imaginary * op2.imaginary;

    int newImaginary = real * op2.imaginary + imaginary * op2.real;

    return Complex(newReal, newImaginary);
  }

  Complex &operator-=(const Complex &op2)
  {
    real -= op2.real;
    imaginary -= op2.imaginary;
    return *this;
  }

  bool operator!=(const Complex &op2)
  {
    return (real != op2.real) || (imaginary != op2.imaginary);
  }

  Complex operator~()
  {
    return Complex(real, -imaginary);
  }

  Complex operator--(int)
  {
    Complex temp = *this;
    real--;
    return temp;
  }

  Complex &operator--()
  {
    real--;
    return *this;
  }

  Complex &operator++()
  {
    real++;
    return *this;
  }

  friend ostream &operator<<(ostream &stream, const Complex &op2);
};

ostream &operator<<(ostream &stream, const Complex &op2)
{
  stream << op2.real;
  if (op2.imaginary >= 0)
    stream << "+";

  stream << op2.imaginary << "i";
  return stream;
}

int main()
{
  Complex a(-5, 7), b(2, -3), c;
  c = a + b;
  cout << "[c = a + b 실행 후]\n";
  cout << "a + b = (" << a << ") + (" << b << ") = " << c << "\n\n";

  c = a * b;
  cout << "[c = a * b 실행 후]\n";
  cout << "a * b = (" << a << ") * (" << b << ") = " << c << "\n\n";

  a -= b;
  cout << "[a -= b 실행 후]\n";
  cout << "a = " << a << "\t b = " << b << "\n\n";

  c = ~b;
  cout << "[c = ~b 실행 후]\n";
  cout << "c = " << c << "\t b = " << b << "\n\n";

  if (c != b)
    cout << "[c != b]\n\n";

  c = b--;
  cout << "[c = --b 실행 후]\n";
  cout << "c = " << c << "\t b = " << b << "\n\n";

  c = ++b;
  cout << "[c = ++b 실행 후]\n";
  cout << "c = " << c << "\t b = " << b << "\n\n";

  return 0;
}
