#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Book
{
private:
  string title;
  int price;

public:
  Book(string title, int price);
  Book(const Book &b);
  ~Book();
  void set(string title, int price);
  void show() { cout << title << ' ' << price << "원" << endl; }
};

Book::Book(string title, int price)
{
  this->title = title;
  this->price = price;
}

Book::Book(const Book &b)
{
  this->title = b.title;
  this->price = b.price;
}

Book::~Book() {}

void Book::set(string title, int price)
{
  this->title = title;
  this->price = price;
}

int main()
{
  Book cpp("명품C++", 10000);
  Book java = cpp;
  java.set("명품자바", 12000);
  cpp.show();
  java.show();

  return 0;
}
