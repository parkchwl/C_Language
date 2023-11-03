#include <iostream>

const float pi = 3.14;

class Sphere
{
private:
  float radius;

public:
  Sphere(float r) : radius(r)
  {
    std::cout << "반지름이 " << radius << "cm인 구 생성" << std::endl;
  }

  ~Sphere()
  {
    std::cout << "반지름이 " << radius << "cm인 구 소멸" << std::endl;
  }

  float calculateSurfaceArea()
  {
    return 4 * pi * radius * radius;
  }
};

int main()
{
  int radius;
  while (true)
  {
    std::cout << "정수 반지름 입력 (음수이면 종료) >> ";
    std::cin >> radius;

    if (radius < 0)
    {
      std::cout << "프로그램을 종료합니다." << std::endl;
      break;
    }

    Sphere *sphere = new Sphere(radius);

    std::cout << "구의 면적은 " << sphere->calculateSurfaceArea() << " 제곱 센티미터" << std::endl;

    delete sphere;
  }

  return 0;
}
