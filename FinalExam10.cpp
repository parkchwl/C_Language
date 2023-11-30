#include <iostream>
using namespace std;

class Person
{
  int weight;
  int height;

public:
  Person(int weight = 0, int height = 0)
  {
    this->weight = weight;
    this->height = height;
  }
  void show();

  Person &operator++()
  {
    ++weight;
    ++height;
    return *this;
  }
};

void Person::show()
{
  cout << "체중(kg) = " << weight << ", 신장(cm) = " << height << endl;
}

int main()
{
  Person a(60, 170), b;

  a.show();
  b.show();

  b = ++a;

  a.show();
  b.show();

  return 0;
}