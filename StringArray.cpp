#include <iostream>
#include <string>
using namespace std;

int main()
{
  string names[5];
  for (int i = 0; i < 5; i++)
  {
    cout << "이름 >> ";
    getline(cin, names[i], '\n'); // '\n'을 만날때까지 키보드(cin)을 통해 문자열을 읽어 names에 저장한다.
  }

  string latter = names[0];
  for (int i = 1; i < 5; i++)
  {
    if (latter < names[i])
    {
      latter = names[i];
    }
  }
  cout << "사전에서 가장 뒤에 나오는 문자열은 " << latter << " 입니다" << endl;
  return 0;
}