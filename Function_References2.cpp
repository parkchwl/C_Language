#include <iostream>
using namespace std;

void charPrint(char ch, int n)
{
  if (n > 0)
  {
    for (int i = 0; i < n; i++)
    {
      cout << ch;
    }
    cout << endl;
  }
  else
  {
    cout << "횟수가 0입니다." << endl;
  }
}

int main()
{
  char input_char;
  int input_count;

  while (true)
  {
    cout << "문자 >> ";
    cin >> input_char;

    cout << "횟수 >> ";
    cin >> input_count;

    charPrint(input_char, input_count);
  }

  return 0;
}
