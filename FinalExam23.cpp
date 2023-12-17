#include <iostream>
using namespace std;

int main()
{
  const double PI = 3.141592;

  double radius, surfaceArea, volume;

  cout << "반지름 >> ";
  cin >> radius;

  double radiusSquared = radius * radius;
  double radiusCubed = radius * radius * radius;

  surfaceArea = 4 * PI * radiusSquared;
  volume = (4.0 / 3) * PI * radiusCubed;

  cout << "구의 표면적 : " << surfaceArea << endl;
  cout << "구의 부피 : " << volume << endl;

  return 0;
}
