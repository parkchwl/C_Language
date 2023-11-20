#include <iostream>
using namespace std;

class Person
{
private:
  int weight;
  int height;

public:
  // 생성자
  Person(int w = 0, int h = 0) : weight(w), height(h) {}

  // == 연산자 오버로딩 (멤버 함수로 구현)
  bool operator==(const Person &other) const
  {
    return (this->weight == other.weight) && (this->height == other.height);
  }

  // 객체 정보 출력 함수
  void show() const
  {
    cout << "체중(kg) = " << weight << ", 신장(cm) = " << height << endl;
  }
};

int main()
{
  // Person 객체 생성
  Person a(70, 180), b(70, 180);

  // 객체 정보 출력
  a.show();
  b.show();

  // 두 객체를 비교하고 결과 출력
  if (a == b)
    cout << "키와 몸무게가 같습니다." << endl;
  else
    cout << "키와 몸무게가 다릅니다." << endl;

  return 0;
}
