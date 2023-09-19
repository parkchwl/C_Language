#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  cout << "★ 영문자 알파벳 빈도수 분석 ★" << endl;
  char input[100];

  cout << "영어 소문자를 입력하세요(100자 미만) >> ";
  cin.getline(input, sizeof(input));

  int alphabetCount[26] = {0};

  for (int i = 0; i < strlen(input); i++)
  {
    char c = input[i];
    if (c >= 'a' && c <= 'z')
    {
      int index = c - 'a';
      alphabetCount[index]++;
    }
  }

  // 빈도수 출력
  for (int i = 0; i < 26; i++)
  {
    if (alphabetCount[i] > 0)
    {
      char alphabet = 'a' + i;
      cout << alphabet << " 의 개수 = " << alphabetCount[i] << endl;
    }
  }

  return 0;
}
