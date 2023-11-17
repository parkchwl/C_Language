#include <iostream>
using namespace std;

int cal(int a, int b)
{
  return a + b;
}

int cal(int a, int b, int c)
{
  return a * b * c;
}

int cal(int a, int b, int c, int d)
{
  int max_value = a;
  if (b > max_value)
    max_value = b;
  if (c > max_value)
    max_value = c;
  if (d > max_value)
    max_value = d;
  return max_value;
}

int main()
{
  cout << cal(10, 20) << endl;
  cout << cal(10, 20, 30) << endl;
  cout << cal(10, 20, 30, 40) << endl;

  return 0;
}
