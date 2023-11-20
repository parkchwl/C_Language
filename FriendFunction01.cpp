#include <iostream>
using namespace std;

class Person
{
private:
  int weight;
  int height;

public:
  // 생성자
  Person(int w, int h) : weight(w), height(h) {}

  // 프렌드 함수 선언
  friend bool equals(Person a, Person b);
};

// 프렌드 함수 정의
bool equals(Person a, Person b)
{
  // 체중과 신장이 모두 같아야 true를 반환
  return (a.weight == b.weight) && (a.height == b.height);
}

int main()
{
  // Person 객체 생성
  Person a(60, 170), b(45, 160);

  // equals 함수를 사용하여 비교 후 결과 출력
  if (equals(a, b))
    cout << "체중과 신장이 같습니다." << endl;
  else
    cout << "체중과 신장이 다릅니다." << endl;

  return 0;
}
