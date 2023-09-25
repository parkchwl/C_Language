#include <iostream>
#include <string>

using namespace std;

int main()
{
  const int maxNames = 5;
  string names[maxNames];

  cout << "5 명의 이름을 ';'으로 구분하여 입력하세요." << endl;
  cout << ">> ";
  cin.getline(names[0], 1000, ';');
  cin.getline(names[1], 1000, ';');
  cin.getline(names[2], 1000, ';');
  cin.getline(names[3], 1000, ';');
  cin.getline(names[4], 1000);

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
