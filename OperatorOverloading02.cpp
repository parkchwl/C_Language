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

  bool operator==(Power op2); // == 연산자 함수 선언 a . == (b)
};

void Power::show()
{
  cout << "kick=" << kick << ","
       << "punch=" << punch << endl;
}

bool Power::operator==(Power op2)
{ // == 연산자 멤버 함수 구현
  if (kick == op2.kick && punch == op2.punch)
    return true;
  else
    return false;
}

int main()
{
  Power a(3, 5), b(3, 5);
  a.show();
  b.show();
  // == 연산자는 두 피연산자의 kick과 punch가 각각 같으면 true를, 아니면 false를 리턴하도록 정의한다.
  if (a == b)
    cout << "두 파워가 같다." << endl;
  else
    cout << "두 파워가 다르다." << endl;
  return 0;
}