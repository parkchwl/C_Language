#include <iostream>
using namespace std;

class Sphere
{
private:
  static int numOfSpheres;
  int radius;

public:
  Sphere(int radius = 2);
  ~Sphere() { numOfSpheres--; }
  double getArea() { return 4 * 3.14 * radius * radius; }
  static int getNumOfSpheres() { return numOfSpheres; }
};

Sphere::Sphere(int radius)
{
  this->radius = radius;
  numOfSpheres++;
}
int Sphere::numOfSpheres = 0;
int main()
{
  Sphere golfBall;
  cout << "현재 구의 개수 = " << Sphere::getNumOfSpheres() << endl;

  Sphere basketBall(12);
  cout << "현재 구의 개수 = " << Sphere::getNumOfSpheres() << endl;

  Sphere superBall(100);
  cout << "현재 구의 개수 = " << Sphere::getNumOfSpheres() << endl;

  Sphere *p = new Sphere[100];
  cout << "현재 구의 개수 = " << Sphere::getNumOfSpheres() << endl;

  delete[] p;
  cout << "현재 구의 개수 = " << Sphere::getNumOfSpheres() << endl;

  return 0;
}