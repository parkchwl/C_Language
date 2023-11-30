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
  Power operator++(int x); // Power 클래스에 int 타입의 매개변수를 가진 operator++(int)연산자 함수 호출
};

void Power::show()
{
  cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

// 현재 객체 a를 tmp 객체에 복사해놓고 현재 객체 a의 kick과 punch를 1씩 증가시킨 후
// tmp를 리턴하여 증가시키기 이전의 객체 a를 리턴한다.

Power Power::operator++(int x)
{
  Power tmp = *this;
  kick++;
  punch++;
  return tmp;
}

int main()
{
  Power a(3, 5), b;
  a.show();
  b.show();

  b = a++;
  a.show();
  b.show();

  return 0;
}