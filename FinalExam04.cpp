#include <iostream>
using namespace std;

class Person
{
private:
  int weight;
  int height;

public:
  Person(int w = 0, int h = 0) : weight(w), height(h) {}

  Person operator+(const Person &other) const
  {
    Person result;
    result.weight = this->weight + other.weight;
    result.height = this->height + other.height;
    return result;
  }

  void show() const
  {
    cout << "체중(kg) = " << weight << ", 신장(cm) = " << height << endl;
  }
};

int main()
{
  // Person 객체 생성
  Person a(60, 170), b(45, 160), c;

  // 두 객체를 더하고 결과를 c에 저장
  c = a + b;

  // 객체 정보 출력
  a.show();
  b.show();
  c.show();

  return 0;
}
