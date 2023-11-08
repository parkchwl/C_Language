#include <iostream>
#include <string>
using namespace std;

int main()
{
  // string 객체 생성
  string str;
  string address("서울특별시");
  string CopyAdress(address);

  // C-String (char [] array)으로부터 스트링 객체 생성
  char text[] = {'L', 'O', 'V', 'E', '\n'};
  string title(text);

  cout << str << endl;
  cout << address << endl;
  cout << CopyAdress << endl;
  cout << title << endl;
  return 0;
}