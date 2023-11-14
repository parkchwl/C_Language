#include <iostream>
#include <cstring>
using namespace std;

class Student
{
  int student_id;
  char *student_name;

public:
  Student(int student_id, const char *student_name);
  Student(Student &student);
  ~Student();
  void changeID(int student_id);
  void changeName(const char *student_name);
  void changeInfo(int student_id, const char *student_name);
  void printStudent() { cout << student_id << ":" << student_name << endl; }
};

Student::Student(int student_id, const char *student_name)
{
  this->student_id = student_id;
  int len = strlen(student_name);
  this->student_name = new char[len + 1];
  strcpy(this->student_name, student_name);
}

Student::Student(Student &student)
{
  this->student_id = student.student_id;
  int len = strlen(student.student_name);
  this->student_name = new char[len + 1];
  strcpy(this->student_name, student.student_name);
  cout << "복사 생성자 실행 원복 객체의 이름 " << this->student_name << endl;
}

Student::~Student()
{
  cout << "소멸자 실행" << this->student_name << endl;
  if (student_name)
    delete[] student_name;
}

void Student::changeID(int student_id)
{
  this->student_id = student_id;
}

void Student::changeName(const char *student_name)
{
  if (strlen(student_name) > strlen(this->student_name))
    return;
  strcpy(this->student_name, student_name);
}

void Student::changeInfo(int student_id, const char *student_name)
{
  this->student_id = student_id;
  if (strlen(student_name) > strlen(this->student_name))
    return;
  strcpy(this->student_name, student_name);
}

int main()
{
  Student first(12345, "David");
  Student second(first);
  Student third(second);

  first.printStudent();
  second.printStudent();
  third.printStudent();

  return 0;
}