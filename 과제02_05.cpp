#include <iostream>
#include <string>

using namespace std;

int main()
{
  string firstString, secondString;

  cout << "첫 번째 문자열을 입력하세요>> ";
  cin >> firstString;

  cout << "두 번째 문자열을 입력하세요>> ";
  cin >> secondString;

  if (firstString == secondString)
  {
    cout << "같습니다" << endl;
  }
  else
  {
    cout << "다릅니다" << endl;
  }

  return 0;
}
