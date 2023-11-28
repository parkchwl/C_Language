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

  Power operator+(int op2); // + 연산자 함수 선언 a . + int()
};

void Power::show()
{
  cout << "kick" << kick << ","
       << "punch=" << punch << endl;
}

Power Power::operator+(int op2)
{ // + 연산자 멤버 함수 구현
  Power tmp;
  tmp.kick = kick + op2;   // kick에 op2 더하기
  tmp.punch = punch + op2; // punch에 op2 더하기
  return tmp;              // 임시객체 리턴
}

int main()
{
  Power a(3, 5), b;
  a.show(); // kick = 3, punch = 5 출력
  b.show(); // kick = 0, punch = 0 출력

  b = a + 2; // 파워 객체와 정수 더하기 : operator+(int) 함수 호출
  a.show();  // kick = 3, punch = 5 출력
  b.show();  // kick = 5, punch = 7 출력
  return 0;
}