#include <iostream>

using namespace std;

int main()
{
  int num1, num2, num3, num4, num5;

  cout << "5개의 정수를 입력하세요: ";
  cin >> num1 >> num2 >> num3 >> num4 >> num5;

  int max_num = num1;

  if (num2 > max_num)
  {
    max_num = num2;
  }

  if (num3 > max_num)
  {
    max_num = num3;
  }

  if (num4 > max_num)
  {
    max_num = num4;
  }

  if (num5 > max_num)
  {
    max_num = num5;
  }

  cout << num1 << " " << num2 << " " << num3 << " " << num4 << " " << num5 << " 중에 제일 큰 수는 " << max_num << "입니다" << endl;

  return 0;
}
