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
  friend class Person;
  static bool equals(const Person &a, const Person &b)
  {
    return (a.weight == b.weight && a.height == b.height);
  }
  static void copy(Person &dest, const Person &src)
  {
    dest.weight = src.weight;
    dest.height = src.height;
  }
};

int main()
{
  Person a(60, 170), b(70, 176);
  PersonManager m;

  if (m.equals(a, b))
    cout << "체중과 신장이 같습니다." << endl;
  else
    cout << "체중과 신장이 다릅니다." << endl;

  m.copy(b, a);

  if (m.equals(a, b))
    cout << "체중과 신장이 같습니다." << endl;
  else
    cout << "체중과 신장이 다릅니다." << endl;

  return 0;
}
