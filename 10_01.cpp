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
    cout << "체중(kg) = " << weight << ", 신장(cm) = " << height << endl;
  }

  Person &operator++()
  {
    ++weight;
    ++height;
    return *this;
  }
};

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
