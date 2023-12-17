#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
  string title;
  string author;

public:
  Book();
  Book(string t, string a);
  void setAuthor(string a);
  string getAuthor();
  void setTitle(string t);
  string getTitle();
  void printInfo();
};

Book::Book() : title("No title"), author("Not Unknown") {}

Book::Book(string t, string a) : title(t), author(a) {}

void Book::setAuthor(string a)
{
  author = a;
}

string Book::getAuthor()
{
  return author;
}

void Book::setTitle(string t)
{
  title = t;
}

string Book::getTitle()
{
  return title;
}

void Book::printInfo()
{
  cout << "책 이름 : " << getTitle() << endl;
  cout << "책 저자 : " << getAuthor() << endl;
}

int main()
{
  Book book1;
  Book book2("위대한 개츠비", "F.스콧 피츠제럴드");
  Book book3("어린왕자", "앙투안 드 생텍쥐페리");
  Book book4("두 도시 이야기", "찰스 디킨스");

  book1.printInfo();
  book2.printInfo();
  book3.printInfo();
  book4.printInfo();

  return 0;
}