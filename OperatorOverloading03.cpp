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
  // 원본 객체 a가 아닌, 복사본에 더하는 문제를 해결하기 위해 객체 a의 참조를 리턴한다.
  Power &operator+=(Power op2); // +=연산자 함수 선언 a. += (b);
};

void Power::show()
{
  cout << "kick=" << kick << ","
       << "punch=" << punch << endl;
}

Power &Power::operator+=(Power op2)
{
  kick = kick + op2.kick;    // kick 더하기 : a의 kick에 b의 kick을 더한다.
  punch = punch + op2.punch; // punch 더하기 : a의 punch에 b의 punch를 더한다.
  return *this;              // 합한 결과를 리턴한다 : 갱신된 Power 객체 a를 리턴한다.
}

int main()
{
  Power a(3, 5), b(4, 6), c; // Power 객체 a, b, c 생성
  a.show();
  b.show();

  c = a += b; // 파워 객체 더하기
  a.show();   // a에 b가 더해짐 kick = 7, punch = 11;
  c.show();   // c는 a에 b가 더해진 값이다. kick = 7, punch = 11;
  return 0;
}