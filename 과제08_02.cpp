#include <iostream>
using namespace std;

void print(char c = ' ', int line = 1);

void print(char c, int line)
{
  for (int i = 0; i < line; i++)
  {
    for (int j = 0; j < 20; j++)
      cout << c;
    cout << endl;
  }
}

int main()
{
  print();
  print('?');
  print('#', 10);
  return 0;
}