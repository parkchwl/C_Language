#include <iostream>
using namespace std;

class Circle
{
  int radius;

public:
  Circle() { radius = 1; }
  Circle(int r) { radius = r; }
  void setRadius(int r) { radius = r; }
  double getArea();
};

double Circle::getArea() { return 3.14 * radius * radius; }

int main()
{
  Circle circleArray[3];

  cout << "< 반지름값 설정하기 전에 출력 >" << endl;
  for (int i = 0; i < 3; i++)
  {
    cout << "Circle" << i << "의 면적은 " << circleArray[i].getArea() << endl;
  }

  circleArray[0].setRadius(10);
  circleArray[1].setRadius(20);
  circleArray[2].setRadius(30);

  cout << endl
       << "< 배열의 각 원소 객체의 멤버 접근 >" << endl;
  for (int i = 0; i < 3; i++)
  {
    cout << "Circle" << i << "의 면적은 " << circleArray[i].getArea() << endl;
  }

  cout << endl
       << "< 객체 포인터 p로 배열 접근 >" << endl;
  Circle *p;
  p = circleArray;
  for (int i = 0; i < 3; i++)
  {
    cout << "Circle" << i << "의 면적은 " << p->getArea() << endl;
    p++;
  }

  cout << endl
       << "< 객체 포인터 p[i]로 배열 접근 >" << endl;
  p = circleArray;
  for (int i = 0; i < 3; i++)
  {
    cout << "Circle" << i << "의 면적은" << p[i].getArea() << endl;
  }
  return 0;
}