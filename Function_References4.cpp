#include <iostream>
using namespace std;

class Sphere
{
private:
  double radius;

public:
  Sphere()
  {
    radius = 0;
  }

  Sphere(double r)
  {
    radius = r;
  }

  double getRadius()
  {
    return radius;
  }

  double getArea()
  {
    return 4 * 3.14159 * radius * radius;
  }
};

Sphere getGolfBall()
{
  return Sphere(2);
}

Sphere getBasketBall()
{
  return Sphere(12);
}

int main()
{
  Sphere golfBall;
  golfBall = getGolfBall();
  cout << "반지름 = " << golfBall.getRadius() << endl;
  cout << "골프 공의 면적 = " << golfBall.getArea() << endl;

  Sphere basketBall;
  basketBall = getBasketBall();
  cout << "반지름 = " << basketBall.getRadius() << endl;
  cout << "농구 공의 면적 = " << basketBall.getArea() << endl;

  return 0;
}
