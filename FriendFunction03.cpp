#include <iostream>
using namespace std;

// 전방 선언
class PersonManager;

// Person 클래스 정의
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

// PersonManager 클래스 정의
class PersonManager
{
public:
  // Person 클래스를 프렌드 함수로 선언
  friend class Person;

  // 두 Person 객체를 비교하는 함수 정의
  static bool equals(const Person &a, const Person &b)
  {
    return (a.weight == b.weight) && (a.height == b.height);
  }

  // 한 Person 객체를 다른 Person 객체로 복사하는 함수 정의
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
