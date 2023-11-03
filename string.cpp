#include <iostream>
using namespace std;

class Sphere
{
public:
  int radius;
  Sphere();
  Sphere(int r);
  double getArea();
};

Sphere::Sphere()
{
  radius = 2;
  cout << "반지름이 " << radius << "cm인 구 생성" << endl;
}

Sphere::Sphere(int r)
{
  radius = r;
  cout << "반지름이 " << radius << "cm인 구 생성" << endl;
}

double Sphere::getArea()
{
  return 4 * 3.14 * radius * radius;
}

int main()
{
  Sphere golfBall;
  Sphere basketBall(12);

  cout << "골프 공의 면적은 " << golfBall.getArea() << endl;
  cout << "농구 공의 면적은 " << basketBall.getArea() << endl;

  Sphere *pGolfBall;
  pGolfBall = &golfBall;
  cout << "골프 공의 면적은 " << pGolfBall->getArea() << endl;

  Sphere pBasketBall;
  pBasketBall = &basketBall;
  cout << "농구 공의 면적은 " << (*pBasketBall).getArea() << endl;

  return 0;
}