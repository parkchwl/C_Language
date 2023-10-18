#include <iostream>
using namespace std;

int main()
{
  cout << "input width>>";
  int width;
  cin >> width;

  cout << "input height";
  int height;
  cin >> height;

  int area = width * height;
  cout << "area is" << area << ".\n";

  cout << " input 5 number>>";
  int num1, num2, num3, num4, num5;
  cin >> num1, num2, num3, num4, num5; // left to right -->
  cout << "input number are" << num1 << num2 << num3 << num4 << num5 << ".\n";
}