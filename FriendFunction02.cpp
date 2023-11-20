#include <iostream>
using namespace std;

class Person; // 전방 선언

class PersonManager
{
public:
  // Person 클래스의 프렌드 함수로 equals 선언
  friend bool equals(Person a, Person b);

  // PersonManager 클래스의 equals 멤버 함수 정의
  bool equals(Person a, Person b)
  {
    // 체중과 신장이 모두 같아야 true를 반환
    return (a.weight == b.weight) && (a.height == b.height);
  }
};

class Person
{
private:
  int weight;
  int height;

public:
  // 생성자
  Person(int w, int h) : weight(w), height(h) {}

  // PersonManager 클래스를 프렌드 클래스로 선언
  friend class PersonManager;
};

int main()
{
  // Person 객체 생성
  Person a(60, 170), b(60, 170);

  // PersonManager 객체 생성
  PersonManager m;

  // PersonManager의 equals 함수를 사용하여 비교 후 결과 출력
  if (m.equals(a, b))
    cout << "체중과 신장이 같습니다." << endl;
  else
    cout << "체중과 신장이 다릅니다." << endl;

  return 0;
}
