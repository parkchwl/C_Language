#include <iostream>
using namespace std;

class Person
{
  int weight, height;

public:
  Person(int weight = 0, int height = 0)
  {
    this->weight = weight;
    this->height = height;
  }
  void show();
  Person operator+(int num); // + 연산자 함수 선언 a . + (num)
};

void Person::show()
{
  cout << "체중(kg) = " << weight << ", "
       << "신장(cm) = " << height << endl;
}

Person Person::operator+(int num)
{
  Person a;
  a.weight = weight - num; // 체중은 10kg 감소
  a.height = height + num; // 신장은 10cm 증가
  return a;
}

int main()
{
  Person a(70, 170), b;
  a.show();
  b.show();

  b = a + 10;
  a.show();
  b.show();
  return 0;
}