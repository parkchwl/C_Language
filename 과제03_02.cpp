#include <iostream>
using namespace std;

class Triangle
{
public:
  int width;
  int height;

  int getArea()
  {
    return (width * height) / 2;
  }
};

int main()
{
  Triangle tri;
  tri.width = 10;
  tri.height = 4;
  cout << "삼각형의 면적은 " << tri.getArea() << endl;
  return 0;
}