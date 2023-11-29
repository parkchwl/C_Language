#include <iostream>
using namespace std;

class Person
{
private:
  int weight;
  int height;

public:
  Person(int w = 0, int h = 0) : weight(w), height(h) {}
  bool operator==(const Person &other) const
  {
    return (this->weight == other.weight) && (this->height == other.height);
  }

  void show() const
  {
    cout << "체중(kg) = " << weight << ", 신장(cm) = " << height << endl;
  }
};

int main()
{
  Person a(70, 180), b(70, 180);

  a.show();
  b.show();

  if (a == b)
    cout << "키와 몸무게가 같습니다." << endl;
  else
    cout << "키와 몸무게가 다릅니다." << endl;
  return 0;
}