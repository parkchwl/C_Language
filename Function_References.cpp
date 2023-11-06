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

void plusRadius(Sphere ball)
{
  double addRadius;
  cout << "반지름을 얼마나 증가할까요? >> ";
  cin >> addRadius;

  double newRadius = ball.getRadius() + addRadius;
  ball.setRadius(newRadius);

  cout << "반지름 = " << ball.getRadius() << " 겉넓이 = " << ball.getArea() << endl;
}

int main()
{
  Sphere football(15);
  cout << "반지름 = " << football.getRadius() << " 겉넓이 = " << football.getArea() << endl;
  plusRadius(football);
  return 0;
}
