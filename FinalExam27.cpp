#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
  string name;
  int age;

public:
  void setPerson(string pname, int page);
  void setName(string pname);
  void setAge(int page);
  string getName();
  int getAge();
  void print();
};

void Person::setPerson(string pname, int page)
{
  setName(pname);
  setAge(page);
}

void Person::setName(string pname)
{
  name = pname;
}

void Person::setAge(int page)
{
  age = page;
}

string Person::getName()
{
  return name;
}

int Person::getAge()
{
  return age;
}

void Person::print()
{
  cout << "이름 : " << getName() << endl;
  cout << "나이 : " << getAge() << endl;
}

int main()
{
  Person person1, person2;

  person1.setPerson("홍길동", 24);
  person2.setPerson("이고대", 20);

  person1.print();
  person2.print();

  return 0;
}
