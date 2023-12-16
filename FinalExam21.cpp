#include <iostream>
using namespace std;

class Person
{
public:
  int age, height, weight;
  Person();
  Person(int age, int height, int weight);
  int getAge();
  int getHeight();
  int getWeight();
};

Person::Person()
{
  age = 1, height = 50, weight = 5;
  cout << "기본 생성자 호출됨" << endl;
  ;
}

Person::Person(int a, int h, int w)
{
  age = a;
  height = h;
  weight = w;
  cout << "매개변수 있는 생성자 호출됨" << endl;
}

int Person::getAge() { return age; }
int Person::getHeight() { return height; }
int Person::getWeight() { return weight; }

int main()
{
  Person Peter;
  cout << "Peter의 나이/신장/체중 : " << Peter.getAge() << "살/" << Peter.getHeight() << "cm/" << Peter.getWeight() << "kg" << endl;
  Person James(20, 168, 55);
  cout << "James의 나이/신장/체중 : " << James.getAge() << "살/" << James.getHeight() << "cm/" << James.getWeight() << "kg" << endl;
}