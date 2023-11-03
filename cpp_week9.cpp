#include <iostream>
using namespace std;

const float pi = 3.14;

class Sphere
{
private:
  float radius;

public:
  Sphere() : radius(0) {}
  Sphere(float r) : radius(r) {}

  float Surface()
  {
    return 4 * pi * radius * radius;
  }

  float getRadius()
  {
    return radius;
  }
};

int main()
{
  Sphere golfBall(2);
  Sphere basketBall(12);

  cout << "반지름이 " << golfBall.getRadius() << "cm이 구 생성\n";
  cout << "반지름이 " << basketBall.getRadius() << "cm인 구 생성\n";

  cout << "골프 공의 면적은 " << golfBall.Surface() << endl;
  cout << "농구 공의 면적은 " << basketBall.Surface() << endl;

  Sphere *ptrGolfBall = &golfBall;
  Sphere *ptrBasketBall = &basketBall;

  cout << "골프 공의 면적은 " << ptrGolfBall->Surface() << endl;
  cout << "농구 공의 면적은 " << ptrBasketBall->Surface() << endl;

  return 0;
}