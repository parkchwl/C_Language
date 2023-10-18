#include <iostream>
using namespace std;

int main()
{
  int i = 2;

  while (i <= 8)
  {
    if (i % 2 == 0)
    {
      int j = 1;
      while (j <= 9)
      {
        cout << i << "x" << j << "=" << i * j << endl;
        j++;
      }
      cout << endl;
    }
    i++;
  }

  return 0;
}
