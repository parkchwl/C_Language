#include <iostream>

using namespace std;

class Sphere
{
private:
  double radius;

public:
  Sphere() : radius(2) {}
  Sphere(double r) : radius(r) {}

  Sphere(const Sphere &other) : radius(other.radius)
  {
    cout << "복사 생성자 실행 radius = " << radius << endl;
  }

  double getSurfaceArea() const
  {
    return 4.0 * 3.14159 * radius * radius;
  }
};

int main()
{
  Sphere golfBall;

  Sphere basketBall(12.0);

  Sphere copy1 = golfBall;

  Sphere copy2 = basketBall;

  cout << "golfBall\t\t겉넓이 = " << golfBall.getSurfaceArea() << endl;
  cout << "copy1\t\t\t겉넓이 = " << copy1.getSurfaceArea() << endl;

  cout << "basketBall\t\t겉넓이 = " << basketBall.getSurfaceArea() << endl;
  cout << "copy2\t\t\t겉넓이 = " << copy2.getSurfaceArea() << endl;

  return 0;
}
