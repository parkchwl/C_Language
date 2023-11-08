#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s;
  cout << "문자열을 입력하세요 >>" << endl;
  getline(cin, s, '\n');
  int len = s.length(); // 문자열의 길이를 저장한다.

  for (int i = 0; i < len; i++)
  {                                    // 문자열의 길이만큼 반복
    string first = s.substr(0, 1);     // 맨앞의 문자 1개를 문자열로 분리한다.
    string sub = s.substr(1, len - 1); // 나머지 문자들을 문자열로 분리한다.
    s = sub + first;
    cout << s << endl;
  }
  return 0;
}