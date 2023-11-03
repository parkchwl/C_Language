#include <iostream>

const float pi = 3.14;

class Sphere
{
private:
  float radius;

public:
  void setRadius(float r)
  {
    radius = r;
  }

  float getRadius()
  {
    return radius;
  }

  float calculateSurfaceArea()
  {
    return 4 * pi * radius * radius;
  }
};

int main()
{
  Sphere spheres[5];

  float radiusValues[] = {2, 4, 6, 8, 10};

  for (int i = 0; i < 5; ++i)
  {
    spheres[i].setRadius(radiusValues[i]);
    std::cout << "반지름 " << spheres[i].getRadius() << "cm인 Sphere " << i << "의 면적: " << spheres[i].calculateSurfaceArea() << std::endl;
  }

  for (int i = 0; i < 5; ++i)
  {
    std::cout << "Sphere " << i << "의 면적: " << spheres[i].calculateSurfaceArea() << std::endl;
  }

  return 0;
}
