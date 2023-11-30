#include <iostream>
using namespace std;

class Power
{
  int kick;
  int punch;

public:
  Power(int kick = 0, int punch = 0)
  {
    this->kick = kick;
    this->punch = punch;
  }
  void show();
  // 전위 ++연산을 위한 operator++() 연산자 함수를 Power클래스의 멤버로 선언한다.
  Power &operator++(); // 전위 ++ 연산자 함수 선언 a. ++ ();
};

void Power::show()
{
  cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

// 매개 변수 없는 operator++()연산자 함수, 리턴 타입은 Power&
// 자신의 kick과 punch를 각각 1씩 증가 시킨 후, 자신(*this)에 대한 참조를 리턴한다.
Power &Power::operator++()
{
  kick++;
  punch++;
  return *this; // 변경된 객체 자신(객체 a)의 참조를 리턴한다
}

int main()
{
  Power a(3, 5), b; // 2개의 Power객체 a,b 생성
  a.show();
  b.show();

  // ++a는 객체 a의 모든 멤버(kick과 punch) 들의 값을 1씩 증가시킨후,
  // 변경된 객체 a의 참조를 리턴하는 것으로 정의한다.
  b = ++a; // 전위 연산자 ++ 사용 : operator++() 함수를 호출한다.
  a.show();
  b.show();

  return 0;
}