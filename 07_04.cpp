#include <iostream>

using namespace std;

// 원주율 상수 정의
const double PI = 3.141592;

class Sphere
{
public:
  Sphere(double initialRadius) : radius(initialRadius) {}

  double calculateSurfaceArea() const
  {
    return 4.0 * PI * radius * radius;
  }

  void setRadius(double newRadius)
  {
    radius = newRadius;
  }

  double getRadius() const
  {
    return radius;
  }

private:
  double radius;
};

void plusRadius(Sphere ball)
{
  cout << "Initial radius: " << ball.getRadius() << endl;
  cout << "Initial surface area of the sphere: " << ball.calculateSurfaceArea() << endl;

  double additionalRadius;
  cout << "Enter the additional radius length: ";
  cin >> additionalRadius;

  ball.setRadius(ball.getRadius() + additionalRadius);

  cout << "Increased radius: " << ball.getRadius() << endl;
  cout << "Surface area of the sphere after increase: " << ball.calculateSurfaceArea() << endl;
}

int main()
{
  Sphere football(15.0);

  plusRadius(football);

  return 0;
}
