#include <iostream>
#include <string>
using namespace std;

class Person
{
  string name;

protected:
  string address;

public:
  void setName(string name) { this->name = name; }
  string getName() { return name; }
};

class Student : public Person
{
public:
  void setAddress(string add)
  {
    address = add;
  }
  string getAddress() { return address; }
};

int main()
{
  Student obj;
  obj.setName("박철우");
  cout << obj.getName() << endl;
  obj.setAddress("세종 조치원읍 세종로 2511");
  cout << obj.getAddress() << endl;
  return 0;
}