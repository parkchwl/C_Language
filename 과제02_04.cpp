#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  const int maxLength = 1000;
  char inputString[maxLength];

  cout << "영어 문장을 입력하시오>> ";
  cin.getline(inputString, maxLength);

  int letterCount[26] = {0};

  for (int i = 0; i < strlen(inputString); ++i)
  {
    char c = inputString[i];
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
      if (c >= 'A' && c <= 'Z')
      {
        c = tolower(c);
      }
      letterCount[c - 'a']++;
    }
  }

  cout << "⭐️⭐️⭐️ 알파벳 빈도수 ⭐️⭐️⭐️" << endl;
  for (char letter = 'a'; letter <= 'z'; ++letter)
  {
    if (letterCount[letter - 'a'] > 0)
    {
      cout << static_cast<char>(toupper(letter)) << " : " << letterCount[letter - 'a'] << endl;
    }
  }

  return 0;
}
