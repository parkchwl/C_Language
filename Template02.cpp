#include <iostream>
using namespace std;

template <class T>
class Rectangle
{
  T width;
  T height;

public:
  Rectangle(T w = 1, T h = 1)
  {
    width = w;
    height = h;
  }
  T getArea();
  bool operator>(Rectangle<T> op2);
};

template <class T>
T Rectangle<T>::getArea()
{
  return width * height;
}

template <class T>
bool Rectangle<T>::operator>(Rectangle<T> op2)
{
  return getArea() > op2.getArea();
}

template <class T>
T bigger(T a, T b)
{
  if (a > b)
    return a;
  else
    return b;
}

int main()
{
  int a = 20, b = 50, c;
  c = bigger(a, b);
  cout << "20과 50중 큰 값은 " << c << endl;

  class Rectangle<double> rect1(10.2, 23.5);
  class Rectangle<double> rect2(20.4, 13.7);

  Rectangle<double> rect3 = bigger(rect1, rect2);

  cout << "rect1과 rect2 중 더 큰 것의 면적은 " << rect3.getArea() << endl;

  return 0;
}
