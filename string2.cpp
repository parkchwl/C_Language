#include <iostream>
using namespace std;

class Sphere
{
  int radius;

public:
  Sphere();
  void setRadius(int r);
  double getArea();
  int readRadius();
};

Sphere::Sphere()
{
  radius = 2;
  cout << "반지름이 " << radius << "cm인 구 생성" << endl;
}

int main()
{
  Sphere sphereArray[5];
  sphereArray[0].setRadius(2);
  sphereArray[1].setRadius(4);
  sphereArray[2].setRadius(6);
  sphereArray[3].setRadius(8);
  sphereArray[4].setRadius(10);

  for (int i = 0; i < 5; i++)
  {
    cout << "반지름 " << sphereArray[i].readRadius() << "cm인 Sphere " << i;
    cout << "의 면적 : " << sphereArray[i].getArea() << endl;
  }

  Sphere *p;
  p = sphereArray;
}