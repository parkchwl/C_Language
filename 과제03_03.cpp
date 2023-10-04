#include <iostream>
#include <cmath>

using namespace std;

class Sphere
{
private:
  double radius;

public:
  Sphere() : radius(0.0)
  {
    cout << "반지름이 " << radius << "cm 인 구 생성" << endl;
  }

  Sphere(double r) : radius(r)
  {
    cout << "반지름이 " << radius << "cm 인 구 생성" << endl;
  }

  double getArea()
  {
    return 4 * M_PI * radius * radius;
  }
};

int main()
{
  Sphere golfBall;
  double golfBall_area = golfBall.getArea();
  cout << "골프 공의 겉 면적은 " << golfBall_area << endl;

  Sphere basketBall(12);
  double basketBall_area = basketBall.getArea();
  cout << "농구 공의 겉 면적은 " << basketBall_area << endl;

  return 0;
}
