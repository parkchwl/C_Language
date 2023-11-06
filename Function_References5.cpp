#include <iostream>
using namespace std;

int double_value(int n)
{
  return n * 2;
}

void double_pointer(int *ptr)
{
  *ptr = *ptr * 2;
}

void double_ref(int &n)
{
  n = n * 2;
}

int main()
{
  int n;
  cout << "숫자를 입력하세요 >> ";
  cin >> n;

  int n1 = double_value(n);
  cout << "값에 의한 호출 n = " << n1 << endl;

  int n2 = n;
  double_pointer(&n2);
  cout << "주소에 의한 호출 n = " << n2 << endl;

  int n3 = n;
  double_ref(n3);
  cout << "참조에 의한 호출 n = " << n3 << endl;

  return 0;
}
