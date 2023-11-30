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
  friend Power &operator++(Power &op);
  friend Power operator++(Power &op, int x);
};

void Power::show()
{
  cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}
Power &operator++(Power &op)
{
  op.kick++;
  op.punch++;
  return op; // 연산 결과 리턴 (참조 리턴)
}

Power operator++(Power &op, int x)
{
  Power tmp = op;
  op.kick++;
  op.punch++;
  return tmp; // 변경 이전의 op를 리턴한다.
}

int main()
{
  Power a(3, 5), b;
  b = ++a;
  a.show();
  b.show();
  b = a++;
  a.show();
  b.show();
  return 0;
}
