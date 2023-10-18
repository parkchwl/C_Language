#include <iostream>
using namespace std;

int getFactorial(int n)
{
  if (n == 0)
  {
    return 1;
  }
  else
  {
    return n * getFactorial(n - 1);
  }
}

int main()
{
  int n;

  do
  {
    cout << "양의 정수를 입력하세요: ";
    cin >> n;
  } while (n < 0);

  int result = getFactorial(n);
  cout << n << "! = " << result << endl;

  return 0;
}
