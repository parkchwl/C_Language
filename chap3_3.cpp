#include <iostream>
using namespace std;

int main()
{
  int age;

  cout << "본인 나이를 입력하세요(0~100)>> ";
  cin >> age;

  if (age >= 0 && age <= 100)
  {
    switch (age / 10)
    {
    case 0:
      cout << "10 대 미만입니다" << endl;
      break;
    case 1:
      cout << "10 대입니다" << endl;
      break;
    case 2:
      cout << "20 대입니다" << endl;
      break;
    case 3:
      cout << "30 대입니다" << endl;
      break;
    case 4:
      cout << "40 대입니다" << endl;
      break;
    case 5:
      cout << "50 대입니다" << endl;
      break;
    case 6:
      cout << "60 대입니다" << endl;
      break;
    case 7:
      cout << "70 대입니다" << endl;
      break;
    case 8:
      cout << "80 대입니다" << endl;
      break;
    default:
      cout << "90 대 이상입니다" << endl;
    }
  }
  else
  {
    cout << "잘못된 나이 입니다" << endl;
  }

  return 0;
}
