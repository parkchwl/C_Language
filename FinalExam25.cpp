#include <iostream>
using namespace std;

int main()
{
  for (int i = 1; i <= 9; ++i)
  {
    for (int j = 1; j <= i; ++j)
    {
      cout << j;
    }

    for (int k = i + 1; k <= 9; ++k)
    {
      cout << "*";
    }

    cout << endl;
  }

  return 0;
}
