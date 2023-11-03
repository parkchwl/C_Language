#include <iostream>

using namespace std;

int main()
{
  int numStrings;
  cout << "문자열의 개수? >> ";
  cin >> numStrings;
  cin.ignore();

  string *stringArray = new string[numStrings];

  for (int i = 0; i < numStrings; ++i)
  {
    cout << "문자열 " << i + 1 << " >> ";
    getline(cin, stringArray[i]);
  }

  string firstString = stringArray[0];
  for (int i = 1; i < numStrings; ++i)
  {
    if (stringArray[i] < firstString)
    {
      firstString = stringArray[i];
    }
  }

  cout << "사전에서 가장 앞에 나오는 문자열은 " << firstString << " 입니다" << endl;

  delete[] stringArray;

  return 0;
}
