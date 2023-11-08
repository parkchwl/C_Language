#include <iostream>
using namespace std;

class Circle
{
  int radius;

public:
  Circle() { radius = 1; }      // 매개변수가 없는 생성자
  Circle(int r) { radius = r; } // 매개변수가 있는 생성자
  double getArea();             // 멤버 함수 (원형 형태로 선언)
};

double Circle::getArea()
{
  return 3.14 * radius * radius;
}

int main()
{
  Circle donut;
  Circle pizza(30);

  cout << "< 객체 이름으로 멤버 접근 >\n";
  cout << "객체 donut의 면적 = " << donut.getArea() << endl;
  cout << "객체 pizza의 면적 = " << pizza.getArea() << endl;

  cout << " 객체 포인터로 멤버 접근 > \n";
  Circle *p;  // Circle 타입의 객체에 대한 포인터 변수 p 선언 (현재 아무 객체도 가리키고 있지 않음)
  p = &donut; // 포인터 변수 p에 donut 객체의 주소를 저장한다. (&연산자로 객체의 주소를 가져왔다.)

  cout << p->getArea() << endl;   // 포인터로 객체의 멤버 함수 호출 : p가 가리키는 객체 donut의 getArea()멤버 함수 호출
  cout << (*p).getArea() << endl; // donut의 getArea()멤버 함수 호출

  Circle *q = &pizza;             // 포인터 변수 q 선언시 pizza 객체의 주소로 초기화도 가능
  cout << q->getArea() << endl;   // q가 카리키는 객체 pizza의 getArea() 멤버함수 호출
  cout << (*q).getArea() << endl; // pizza의 getArea() 멤버함수 호출

  return 0;
}