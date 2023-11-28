#include <iostream>
using namespace std;

class Book
{
  string title;
  int price, pages;

public:
  Book(string title = "", int price = 0, int pages = 0)
  {
    this->title = title;
    this->price = price;
    this->pages = pages;
  }

  void show()
  {
    cout << title << ' ' << price << "원" << pages << "페이지" << endl;
  }
  string getTitle()
  {
    return title;
  }
  friend Book &operator+=(Book &bk, int num); // 외부 함수로 구현 및 friend로 선언
  friend Book &operator-=(Book &bk, int num); // 연산자 함수 선언
};

Book &operator+=(Book &bk, int num)
{
  bk.price += num;
  return bk;
}

Book &operator-=(Book &bk, int num)
{
  bk.price -= num;
  return bk;
}

int main()
{
  Book a("청춘이 좋다", 20000, 300), b("미래의 꿈", 30000, 500);
  a.show();
  b.show();
  a += 5000;
  b -= 5000;
  a.show();
  b.show();
  return 0;
}