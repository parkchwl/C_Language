#include <iostream>
using namespace std;

class Triangle
{
  int base, height;

public:
  Triangle() { base = height = 1; }
  Triangle(int b, int h)
  {
    base = b;
    height = h;
  }
  void setValues(int b, int h)
  {
    base = b;
    height = h;
  }
  double getArea();
};

double Triangle::getArea() { return 0.5 * base * height; }