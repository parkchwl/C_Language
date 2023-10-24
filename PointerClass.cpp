#include <iostream>
using namespace std;

class Circle
{
  int radius;

public:
  Circle() { radius = 1; }      // 멤버변수가 없는 Circle 클래스
  Circle(int r) { radius = r; } // 멤버변수가 있는 Circle 클래스
  double getArea();             // 클래스 선언부에 멤버 함수 선언
};

double Circle::getArea()
{
  return 3.14 * radius * radius;
}

int main()
{
  Circle donut;
  Circle pizza(30);

  cout << donut.getArea() << endl; // 객체 이름으로 멤버 접근

  Circle *p;
  p = &donut;
  cout << p->getArea() << endl;   // donut의 getArea() 호출
  cout << (*p).getArea() << endl; // donut의 getArea() 호출

  p = &pizza;
  cout << p->getArea() << endl;   // pizza의 getArea() 호출
  cout << (*p).getArea() << endl; // pizza의 getArea()호출
}

// 포인터로 멤버를 접근할 때. 객체포인터 -> 멤버