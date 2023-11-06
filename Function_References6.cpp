#include <iostream>
using namespace std;

class Sphere
{
private:
  double radius;

public:
  Sphere(double r)
  {
    radius = r;
    cout << "생성자 실행 radius = " << radius << endl;
  }

  ~Sphere()
  {
    cout << "소멸자 실행 radius = " << radius << endl;
  }

  double getRadius()
  {
    return radius;
  }

  double getArea()
  {
    return 4 * 3.14159 * radius * radius;
  }

  void setRadius(double r)
  {
    radius = r;
  }
};

void doubleRadius(Sphere &ball)
{
  ball.setRadius(ball.getRadius() * 2);
}

int main()
{
  Sphere football(15);
  cout << "반지름 = " << football.getRadius() << " 겉넓이 = " << football.getArea() << endl;

  doubleRadius(football);

  cout << "반지름 = " << football.getRadius() << " 겉넓이 = " << football.getArea() << endl;

  return 0;
}
