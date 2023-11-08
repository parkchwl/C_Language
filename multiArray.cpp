#include <iostream>
using namespace std;

class Circle
{
  int radius;

public:
  Circle() { radius = 1; } // 매개변수가 없는 기본생성자
  Circle(int r) { radius = r; }
  void setRadius(int r) { radius = r; }
  double getArea();
};

double Circle::getArea() { return 3.14 * radius * radius; }

int main()
{
  // 객체 배열을 생성할 때 생성자를 이용하여 원소 객체를 초기화 할 수 있다.
  // circleArray[0] 객체가 생성될 때, 생성자 Circle(10)을 호출한다 - 매개변수를 가진 Circle(int r) 생성자 호출
  // circleArray[1] 객체가 생성될 때, 생성자 Circle(20)을 호출한다 - 매개변수를 가진 Circle(int r) 생성자 호출
  // circleArray[2] 객체가 생성될 때, 기본 생성자 Circle() 호출
  Circle circleArray[3] = {Circle(10), Circle(20), Circle()}; // Circle 배열 초기화

  for (int i = 0; i < 3; i++)
  {
    cout << "Circle" << i << "의 면적은 " << circleArray[i].getArea() << endl;
  }

  {
    // 2차원 배열도 1차원 배열과 동일하게 각 원소 객체가 생성될 때, 기본 생성자 Circle() 이 실행이 되어 모든 객체의 radius 값이 1이 된다.
    Circle circles1[2][3]; // 2행 3열의 2차원 객체 배열 생성

    // 방법 1 : Circle 객체의 멤버 함수를 이용하여 2차원 객체 배열 초기화
    // 배열 생성후 setRadius() 멤버 함수를 호출하여 각 객체의 radius 값을 1에서 6까지 초기화한다.
    circles1[0][0].setRadius(1);
    circles1[0][1].setRadius(2);
    circles1[0][2].setRadius(3);
    circles1[1][0].setRadius(4);
    circles1[1][1].setRadius(5);
    circles1[1][2].setRadius(6);

    cout << "<<circles1[2][3]의 면적 출력>>" << endl;
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        cout << "Circle [" << i << "," << j << "]의 면적은 " << circles1[i][j].getArea() << endl;
      }
    }

    // 방법 2 : 중괄호 ({}) 안에 생성자를 지정하여 2차원 객체 배열 초기화
    // 2차원 배열 선언과 초기화
    Circle circles2[2][3] = {{Circle(), Circle(2), Circle(3)}}, {Circle(4), Circle(5), Circle(6)};
    return 0;
  }
}