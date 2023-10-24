#include <iostream>
#include <string>

using namespace std;

int main()
{
  const int maxNames = 5;
  string names[maxNames];

  cout << "5 명의 이름을 ';'으로 구분하여 입력하세요." << endl;
  cout << ">> ";
  getline(cin, names[0], ';');
  getline(cin, names[1], ';');
  getline(cin, names[2], ';');
  getline(cin, names[3], ';');
  getline(cin, names[4]);

  for (int i = 0; i < maxNames; ++i)
  {
    cout << i + 1 << "\t: " << names[i] << endl;
  }

  string longestName = names[0];
  for (int i = 1; i < maxNames; ++i)
  {
    if (names[i].length() > longestName.length())
    {
      longestName = names[i];
    }
  }

  cout << "가장 긴 이름은 " << longestName << endl;

  return 0;
}
