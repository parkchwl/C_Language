#include <iostream>
using namespace std;

class Person
{
private:
  int weight;
  int height;

public:
  Person(int w = 0, int h = 0) : weight(w), height(h) {}

  void show() const
  {
    std::cout << "체중(kg) = " << weight << ", 신장(cm) = " << height << std::endl;
  }

  friend Person operator+(const Person &p1, const Person &p2);
};

Person operator+(const Person &p1, const Person &p2)
{
  return Person(p1.weight + p2.weight, p1.height + p2.height);
}

int main()
{

  Person a(40, 155), b(50, 165), c;
  c = a + b;

  a.show();
  b.show();
  c.show();

  return 0;
}
