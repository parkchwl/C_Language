#include <iostream>

using namespace std;

class Person
{
private:
  double height;
  double weight;

public:
  Person(double h = 0.0, double w = 0.0) : height(h), weight(w) {}

  double getBMI()
  {
    double bmi = weight / (height * height);
    return bmi;
  }

  double getHeight()
  {
    return height;
  }

  double getWeight()
  {
    return weight;
  }
};

int main()
{
  Person normal(1.8, 69);
  cout << "키 : " << normal.getHeight() << "m" << endl;
  cout << "체중 : " << normal.getWeight() << "kg" << endl;
  cout.precision(4);
  cout << "BMI = " << normal.getBMI() << endl;

  Person check(1.6, 68);
  cout << "키 : " << check.getHeight() << "m" << endl;
  cout << "체중 : " << check.getWeight() << "kg" << endl;
  cout.precision(4);
  cout << "BMI = " << check.getBMI() << endl;

  return 0;
}
