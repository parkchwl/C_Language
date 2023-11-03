#include <iostream>

const float pi = 3.14;

using namespace std;

class Sphere
{
private:
  float radius;

public:
  void setRadius(float r)
  {
    radius = r;
  }

  float calculateSurfaceArea()
  {
    return 4 * pi * radius * radius;
  }
};

int main()
{
  int numSpheres;
  cout << "생성하고자 하는 구의 개수? >> ";
  cin >> numSpheres;

  Sphere *spheres = new Sphere[numSpheres];

  int countInRange = 0;

  for (int i = 0; i < numSpheres; ++i)
  {
    int radiusInput;
    cout << "구 " << i + 1 << " : ";
    cin >> radiusInput;
    spheres[i].setRadius(radiusInput);
  }

  for (int i = 0; i < numSpheres; ++i)
  {
    float area = spheres[i].calculateSurfaceArea();
    cout << "구 " << i << "의 겉넓이 = " << area << endl;

    if (area >= 100 && area <= 1000)
    {
      countInRange++;
    }
  }

  cout << "\n면적이 100에서 1000 사이인 구의 개수는 " << countInRange << endl;

  delete[] spheres;
  return 0;
}
