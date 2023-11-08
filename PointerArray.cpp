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
  Circle circleArray[3]; // Circle 객체의 배열 circleArray 선언(매개변수가 없는 기본생성자 호출)

  cout << " < 반지름값 설정하기 전에 출력 >" << endl;
  for (int i = 0; i < 3; i++)
  {
    cout << "Circle" << i << "의 면적은 " << circleArray[i].getArea() << endl;
  }

  circleArray[0].setRadius(10); // 배열 circleArray의 각 원소 Circle 객체의 setRadius()멤버 함수를 호출한다.
  circleArray[1].setRadius(20);
  circleArray[2].setRadius(30);

  cout << endl
       << " < 배열의 각 원소 객체의 멤버 접근 > " << endl;
  for (int i = 0; i < 3; i++)
  {
    cout << "Circle" << i << "의 면적은 " << circleArray[i].getArea() << endl;
  }

  // 객체 포인터로 배열 접근
  cout << endl
       << "< 객체 포인터 p로 배열 접근 >" << endl;
  Circle *p;       // Circle 객체에 대한 포인터 변수 p 선언
  p = circleArray; // p는 circleArray 배열을 가리킨다.
  for (int i = 0; i < 3; i++)
  {
    cout << "Circle" << i << "의 면적은 " << p->getArea() << endl;
    p++; // p는 배열의 다음 원소를 가리킨다. (다음 Circle 객체 주소로 증가)
  }

  // p[i]는 배열의 i번째 Circle 객체이므로 아래와 같이 사용할 수도 있다.
  cout << endl
       << "< 객체 포인터 p[i]로 배열 접근 >" << endl;
  p = circleArray; // p는 circleArray 배열을 가리킨다 (다시 주소 저장)
  for (int i = 0; i < 3; i++)
  {
    cout << "Circle" << i << "의 면적은 " << p[i].getArea() << endl;
  }
  return 0;
}
