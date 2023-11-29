#include <iostream>
using namespace std;

class Person
{
  int weight;
  int height;

public:
  Person(int w, int h) : weight(w), height(h) {} // 생성자

  friend bool equals(Person a, Person b);
};

bool equals(Person a, Person b)
{
  return (a.weight == b.weight && a.height == b.height);
}

int main()
{
  Person a(60, 170), b(45, 160); // Person 객체 생성
  if (equals(a, b))              // equals 함수를 사용하여 비교 후에 결과를 출력한다.
    cout << "체중과 신장이 같습니다." << endl;
  else
    cout << "체중과 신장이 다릅니다." << endl;
  return 0;
}