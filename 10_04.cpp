#include <iostream>

using namespace std;

class Sphere
{
private:
  double radius;

public:
  Sphere() : radius(0) {}
  Sphere(double r) : radius(r) {}

  double getRadius() const
  {
    return radius;
  }

  double getArea() const
  {
    const double pi = 3.14;
    return 4.0 * pi * radius * radius;
  }

  void show() const
  {
    cout << "반지름 = " << radius << ", 겉넓이 = " << getArea() << endl;
  }

  friend Sphere operator+(const Sphere &s1, const Sphere &s2);
};

Sphere operator+(const Sphere &s1, const Sphere &s2)
{
  double newRadius = s1.getRadius() + s2.getRadius();
  return Sphere(newRadius);
}

int main()
{
  Sphere golfBall(2);
  Sphere basketBall(12);
  Sphere combinedSphere = golfBall + basketBall;

  golfBall.show();
  basketBall.show();
  combinedSphere.show();

  return 0;
}
