#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
  string name;
  int weight;
  int height;

public:
  // 생성자
  Person(string n = "", int w = 0, int h = 0) : name(n), weight(w), height(h) {}

  // 객체 정보 출력 함수
  void show() const
  {
    cout << name << " " << weight << "kg " << height << "cm" << endl;
  }

  // += 연산자 오버로딩 (멤버 함수로 구현)
  void operator+=(int value)
  {
    height += value;
  }

  // -= 연산자 오버로딩 (멤버 함수로 구현)
  void operator-=(int value)
  {
    weight -= value;
  }
};

int main()
{
  // Person 객체 생성
  Person a("홍길동", 50, 150);
  Person b("이순신", 90, 150);

  // 객체 정보 출력
  a.show();
  b.show();

  // += 및 -= 연산자를 사용하여 객체의 height와 weight 조작 후 출력
  a += 30;
  b -= 30;

  // 객체 정보 다시 출력
  a.show();
  b.show();

  return 0;
}
