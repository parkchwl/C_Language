#include <iostream>
using namespace std;

class Box
{
private:
  double length;
  double width;
  double height;

public:
  static int boxCount;

  Box();
  Box(double l, double w, double h);
  double Volume();
  ~Box();
};

int Box::boxCount = 0;

Box::Box() : length(2.0), width(2.0), height(2.0)
{
  boxCount++;
}

Box::Box(double l, double w, double h) : length(l), width(w), height(h)
{
  boxCount++;
}

double Box::Volume()
{
  return length * width * height;
}

Box::~Box()
{
  boxCount--;
}

int main()
{
  Box Box1;
  cout << "Box0 생성 후 박스 수 = " << Box::boxCount << endl;

  Box Box2(4.0, 4.0, 4.0);
  cout << "Box1 생성 후 박스 수 = " << Box::boxCount << endl;

  Box Box3(8.0, 8.0, 8.0);
  cout << "Box2 생성 후 박스 수 = " << Box::boxCount << endl;

  cout << "전체 생성된 박스 수 = " << Box::boxCount << endl;

  cout << "Box0.objectCount = " << Box1.boxCount << endl;

  cout << "Box0의 부피 = " << Box1.Volume() << endl;
  cout << "Box1의 부피 = " << Box2.Volume() << endl;
  cout << "Box2의 부피 = " << Box3.Volume() << endl;

  return 0;
}
