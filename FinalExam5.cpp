#include <iostream>
using namespace std;

class Person
{
public:
  double money; // 개인 소유의 돈
  void addMoney(int money)
  {
    this->money += money;
  }

  static int sharedMoney; // 공금
  static void addShared(int n)
  {
    sharedMoney += n;
  }
};

int Person::sharedMoney = 10;

int main()
{
  Person::addShared(50); // static 멤버 접근, 공금 = 60;
  cout << Person::sharedMoney << endl;

  Person han;
  han.money = 100;
  han.sharedMoney = 200; // static 멤버 접근, 공금 = 200
  Person::sharedMoney = 300;
  Person::addShared(100);

  cout << han.money << ' ' << Person::sharedMoney << endl;
}