#include <iostream>
using namespace std;

class Shape
{
private:
  int x, y;

public:
  Shape(int xval, int yval) : x(xval), y(yval) {}

  void setX(int xval)
  {
    x = xval;
  }

  void setY(int yval)
  {
    y = yval;
  }
};

class Rectangle : public Shape
{
private:
  int width, height;

public:
  Rectangle(int w, int h) : Shape(0, 0), width(w), height(h) {}

  void setWidth(int w)
  {
    width = w;
  }

  void setHeight(int h)
  {
    height = h;
  }

  int getArea()
  {
    return width * height;
  }
};

int main()
{
  Rectangle r(5, 6);

  cout << "사각형의 면적 = " << r.getArea() << endl;
  return 0;
}