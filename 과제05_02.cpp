#include <iostream>
using namespace std;

char &find(char s[], char target, bool &found)
{
  for (int i = 0; s[i] != '\0'; i++)
  {
    if (s[i] == target)
    {
      found = true;
      return s[i];
    }
  }
  found = false;
  return s[0];
}

int main()
{
  char s[] = "Mike";
  bool b;
  char &loc1 = find(s, 'k', b);

  if (!b)
  {
    cout << "k를 발견할 수 없음" << endl;
    return 0;
  }

  loc1 = 'm';
  cout << s << endl;

  char &loc2 = find(s, 'k', b);

  if (!b)
  {
    cout << "k를 발견할 수 없음" << endl;
    return 0;
  }

  loc2 = 't';
  cout << s << endl;

  return 0;
}
