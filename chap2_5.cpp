#include <iostream>
#include <string>
using namespace std;

int main()
{
  string firstPassword, secondPassword;

  cout << "새 암호를 입력하세요 >> ";
  getline(cin, firstPassword);

  cout << "새 암호를 다시 한번 입력하세요 >> ";
  getline(cin, secondPassword);

  if (firstPassword == secondPassword)
  {
    cout << "같습니다" << endl;
  }
  else
  {
    cout << "다릅니다" << endl;
  }

  return 0;
}
