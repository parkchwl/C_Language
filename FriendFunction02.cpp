#include <iostream>
using namespace std;

class Person
{
public:
  int weight;
  int height;

  Person(int w, int h) : weight(w), height(h) {}

  friend class PersonManager;
};

class PersonManager
{
public:
  friend bool equals(Person a, Person b);

  static bool equals(Person a, Person b)
  {
    return (a.weight == b.weight) && (a.height == b.height);
  }
};

int main()
{
  Person a(60, 170), b(60, 170);
  PersonManager m;

  if (m.equals(a, b))
    cout << "체중과 신장이 같습니다." << endl;
  else
    cout << "체중과 신장이 다릅니다." << endl;

  return 0;
}
