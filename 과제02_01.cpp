#include <iostream>

using namespace std;

int main()
{
  const int numbersPerLine = 5;

  for (int i = 1; i <= 100; ++i)
  {
    cout << i << '\t';

    if (i % numbersPerLine == 0)
    {
      cout << endl;
    }
  }

  if (100 % numbersPerLine != 0)
  {
    cout << endl;
  }

  return 0;
}
