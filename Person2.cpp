#include <iostream>
using namespace std;

class Person
{
public:
  int age, height, weight;
  int getAge();
  int getHeight();
  int getWeight();
};

int Person::getAge() { return age; }
int Person::getHeight() { return height; }
int Person::getWeight() { return weight; }

int main()
{
  Person Peter;
  Person James;

  Peter.age = 25;
  Peter.height = 180;
  Peter.weight = 80;
  James.age = 20;
  James.height = 168;
  James.weight = 55;

  cout << "Peter의 나이/신장/체중 : " << Peter.getAge() << "살/" << Peter.getHeight() << "cm/" << Peter.getWeight() << "kg" << endl;
  cout << "James의 나이/신장/체중 : " << James.getAge() << "살/" << James.getHeight() << "cm/" << James.getWeight() << "kg" << endl;
}