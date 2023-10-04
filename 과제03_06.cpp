#include <iostream>

using namespace std;

class Person
{
private:
  int height = 0;
  int weight = 0;

public:
  void setHeight(int h);
  void setWeight(int w);
  void setBoth(int h, int w);
  int getHeight();
  int getWeight();
};

void Person::setHeight(int h) { height = h; }
void Person::setWeight(int w) { weight = w; }
void Person::setBoth(int h, int w)
{
  height = h;
  weight = w;
}
int Person::getHeight() { return height; }
int Person::getWeight() { return weight; }

int main()
{
  Person A;
  A.setHeight(180);
  A.setWeight(75);

  Person B;
  B.setHeight(169);
  B.setWeight(62);

  Person C;
  C.setBoth(181, 72);

  cout << "사람 A : " << A.getHeight() << "cm / " << A.getWeight() << "kg" << endl;
  cout << "사람 B : " << B.getHeight() << "cm / " << B.getWeight() << "kg" << endl;
  cout << "사람 C : " << C.getHeight() << "cm / " << C.getWeight() << "kg" << endl;
}