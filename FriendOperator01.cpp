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

  // private 속성인 kick, punch를 접근할 수 있도록 하기 위해 연산자 함수를 Friend로 선언햇다.
  friend Power operator+(int op1, Power op2); // 프렌드 선언
};

void Power::show()
{
  cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power operator+(int op1, Power op2)
{ // +연산자 함수를 외부 함수로 구현
  Power tmp;
  tmp.kick = op1 + op2.kick;
  tmp.punch = op1 + op2.punch;
  return tmp;
}

int main()
{
  Power a(3, 5), b;
  a.show();
  b.show();

  b = 2 + a;
  a.show();
  b.show();
  return 0;
}