#include <iostream>
using namespace std;

void gogodan(int dan)
{
  int count = 1;
  while (true)
  {
    cout << dan << " * " << count << " = " << (dan * count) << endl;
    count++;
    if (count > 9)
    {
      break;
    }
  }
}

int main()
{
  int input;
  while (true)
  {
    cout << "원하는 단을 입력하세요 (0 입력시 종료) >> ";
    cin >> input;

    if (input == 0)
    {
      cout << "프로그램을 종료합니다." << endl;
      break;
    }

    gogodan(input);
  }

  return 0;
}
