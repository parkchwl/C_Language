#include <iostream>

using namespace std;

class Student
{
private:
  string name;
  string phone;
  string email;
  static int numOfStudents;

public:
  Student(const string &n, const string &p, const string &e) : name(n), phone(p), email(e)
  {
    numOfStudents++;
  }

  void displayInfo() const
  {
    cout << name << " / " << phone << " / " << email << endl;
  }

  static int getNumOfStudents()
  {
    return numOfStudents;
  }
};

int Student::numOfStudents = 0;

int main()
{
  char choice;

  do
  {
    cout << "학생을 등록하시겠습니까? (y or n) : ";
    cin >> choice;

    if (choice == 'y')
    {
      string name, phone, email;

      cout << "학생 이름 : ";
      cin >> name;

      cout << "학생 번호 : ";
      cin >> phone;

      cout << "학생 메일 : ";
      cin >> email;

      Student student(name, phone, email);
      student.displayInfo();

      cout << ">> 현재까지 등록한 학생 수 =" << student.getNumOfStudents() << endl;
    }

  } while (choice == 'y');

  cout << ">> 현재까지 등록한 학생 수 = " << Student::getNumOfStudents() << endl;

  return 0;
}
