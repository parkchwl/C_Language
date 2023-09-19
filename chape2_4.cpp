#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char sentence[100];
  int counter[26];
  cout << "영어 문장을 입력하시오>> ";

  cin.getline(sentence, 100);

  for (int i = 0; i < strlen(sentence); i++)
  {
    if (sentence[i] >= 65 && sentence[i] <= 90)
    {
      counter[(sentence[i] - 65)] += 1;
    }

    else if (sentence[i] >= 97 && sentence[i] <= 122)
    {
      counter[(sentence[i] - 97)] += 1;
    }
  }

  cout << "★★★ 알파벳 빈도수 분석 ★★★" << endl;
  for (int i = 0; i < 26; i++)
  {
    if (counter[i] != 0)
    {
      cout << (char)(i + 65) << " : " << counter[i] << endl;
    }
  }

  return 0;
}