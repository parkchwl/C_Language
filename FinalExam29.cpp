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
  cout << getTitle() << " (저자 : " << getAuthor() << ")";
}

int main()
{
  const int NUM_BOOKS = 3;
  Book library[NUM_BOOKS];

  library[0].setTitle("위대한 개츠비");
  library[0].setAuthor("F. 스콧 피츠제럴드");

  library[1].setTitle("어린왕자");
  library[1].setAuthor("앙투안 드 생텍쥐페리");

  library[2].setTitle("두 도시 이야기");
  library[2].setAuthor("찰스 디킨스");

  cout << "<< 소장 도서 목록 >>" << endl;
  for (int i = 0; i < NUM_BOOKS; ++i)
  {
    cout << i + 1 << " ";
    library[i].printInfo();
    cout << endl;
  }

  return 0;
}
