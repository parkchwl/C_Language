#include <iostream>
using namespace std;

const double PI = 3.14;

void getArea(double radius)
{
  if (radius < 0)
  {
    cout << "반지름은 0보다 작을 수 없습니다. 다시 입력하세요." << endl;
  }
  else
  {
    double area = PI * radius * radius;
    cout << "원의 넓이: " << area << endl;
  }
}

int main()
{
  double radius;

  do
  {
    cout << "반지름을 입력하세요: ";
    cin >> radius;

    if (radius < 0)
    {
      cout << "반지름은 0보다 작을 수 없습니다." << endl;
    }
  } while (radius < 0);

  getArea(radius);

  return 0;
}
