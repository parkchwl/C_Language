#include <iostream>
using namespace std;

class Circle
{
private:
  double radius;

public:
  Circle(double r) : radius(r) {}

  void show()
  {
    cout << "반지름이 " << radius << "인 원" << endl;
  }

  double getRadius()
  {
    return radius;
  }

  void setRadius(double r)
  {
    radius = r;
  }
};

void mySwap(Circle &a, Circle &b)
{
  double temp = a.getRadius();
  a.setRadius(b.getRadius());
  b.setRadius(temp);
}

void mySwap(Circle *a, Circle *b)
{
  double temp = a->getRadius();
  a->setRadius(b->getRadius());
  b->setRadius(temp);
}

void increaseBy(Circle &a, Circle &b)
{
  a.setRadius(a.getRadius() + b.getRadius());
}

int main()
{
  Circle x(10), y(5);

  cout << "x객체: ";
  x.show();
  cout << "y객체: ";
  y.show();
  cout << endl;

  mySwap(x, y);

  cout << "x객체: ";
  x.show();
  cout << "y객체: ";
  y.show();
  cout << endl;

  mySwap(&x, &y);

  cout << "x객체: ";
  x.show();
  cout << "y객체: ";
  y.show();
  cout << endl;

  increaseBy(x, y);

  cout << "x객체: ";
  x.show();
  cout << "y객체: ";
  y.show();

  return 0;
}
