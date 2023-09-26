#include <iostream>
using namespace std;

class Person
{
public:
  double height;
  double weight;
  Person();
  Person(double n, double w);
  double getBMI();
};

Person::Person() : height(1.8), weight(69)
{
  cout << "키 : " << height << "m" << endl;
  cout << "체중: " << weight << "kg" << endl;
}

Person::Person(double h, double w) : height(h), weight(w)
{
  cout << "키 : " << height << "m" << endl;
  cout << “체중 : “ << weight << “kg” << endl;
}

double Person::getBMI()
{
  return weight / (height * height);
}

int main()
{
  Persone normal;
  double normal_BMI = normal.getBMI();
  cout << “BMI = “ << normal_BMi << endl;

  Person check(1.6, 68);
  double check_BMI = check.getBMI();
  cout << “ BMI = “ << check_BMI << endl;
}