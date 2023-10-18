#include <iostream>
using namespace std;

void addWithPointer(int *sum, int plus)
{
  *sum += plus;
}

void addByValue(int sum, int plus)
{
  sum += plus;
}

int main()
{
  int sum = 5;
  int plus = 7;

  cout << "첫 번째 함수: 포인터를 사용하여 sum의 주소를 전달" << endl;
  cout << "원래 sum의 값: " << sum << endl;
  addWithPointer(&sum, plus);
  cout << "함수 호출 후 sum의 값: " << sum << endl;

  sum = 5;

  cout << "\n두 번째 함수: int 변수를 사용하여 sum의 값을 전달" << endl;
  cout << "원래 sum의 값: " << sum << endl;
  addByValue(sum, plus);
  cout << "함수 호출 후 sum의 값: " << sum << endl;

  return 0;
}
