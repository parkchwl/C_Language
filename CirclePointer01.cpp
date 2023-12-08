#include <iostream>
using namespace std;

class Circle
{
  int radius;

public:
  Circle() { radius = 1; }
  Circle(int r) { radius = r; }
  double getArea();
};

double Circle::getArea()
{
  return 3.14 * radius * radius;
}

int main()
{
  Circle donut;
  Circle pizza(30);

  cout << "< 객체 이름으로 멤버 접근 >\n";
  cout << "객체 donut의 면적 = " << donut.getArea() << endl;
  cout << "객체 pizza의 면적 = " << pizza.getArea() << endl;

  cout << " < 객체 포인터로 멤버 접근 > \n";
  Circle *p;
  p = &donut;
  cout << p->getArea() << endl;
  cout << (*p).getArea() << endl;

  Circle *q = &pizza;
  cout << q->getArea() << endl;
  cout << (*q).getArea() << endl;

  return 0;
}