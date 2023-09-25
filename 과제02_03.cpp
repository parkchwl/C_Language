#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  const int maxLength = 100;
  char inputString[maxLength];

  cout << "⭐️ 영문자 알파벳 빈도수 분석 ⭐️" << endl;
  cout << "영어 소문자를 입력하세요(100자 미만) >> ";
  cin.getline(inputString, maxLength);

  int letterCount[26] = {0};

  for (int i = 0; i < strlen(inputString); ++i)
  {
    char c = inputString[i];
    if (c >= 'a' && c <= 'z')
    {
      letterCount[c - 'a']++;
    }
  }

  for (char letter = 'a'; letter <= 'z'; ++letter)
  {
    if (letterCount[letter - 'a'] > 0)
    {
      cout << letter << "의 개수 = " << letterCount[letter - 'a'] << endl;
    }
  }

  return 0;
}
