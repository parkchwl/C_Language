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

  friend Person operator+(int n, const Person &p);
};

Person operator+(int n, const Person &p)
{
  return Person(p.weight + n, p.height + n);
}

int main()
{
  Person a(60, 170), b;

  a.show();
  b.show();

  b = 5 + a;

  a.show();
  b.show();

  b = 3 + b;
  b.show();

  return 0;
}
