#include <iostream>
#include <string>

using namespace std;

class Student
{
protected:
  string name;
  int korean;
  int computer;

public:
  Student(string name, int korean, int computer)
      : name(name), korean(korean), computer(computer) {}

  string getName() { return name; }
  int getKorean() { return korean; }
  int getComputer() { return computer; }

  float getAverage()
  {
    return (korean + computer) / 2.0f;
  }

  void display()
  {
    cout << "이름 : " << name << endl;
    cout << "국어 : " << korean << endl;
    cout << "컴퓨터 : " << computer << endl;
    cout << "-------------------" << endl;
    cout << "평균 : " << getAverage() << endl;
  }
};

class FirstGrade : public Student
{
public:
  FirstGrade(string name, int korean, int computer, int math)
      : Student(name, korean, computer), math(math) {}

  float getAverage()
  {
    return (korean + computer + math) / 3.0f;
  }

  void display()
  {
    cout << "이름 : " << name << endl;
    cout << "국어 : " << korean << endl;
    cout << "컴퓨터 : " << computer << endl;
    cout << "수학 : " << math << endl;
    cout << "-------------------" << endl;
    cout << "평균 : " << getAverage() << endl;
  }

private:
  int math;
};

class SecondGrade : public Student
{
public:
  SecondGrade(string name, int korean, int computer, int science, int moral)
      : Student(name, korean, computer), science(science), moral(moral) {}

  float getAverage()
  {
    return (korean + computer + science + moral) / 4.0f;
  }

  void display()
  {
    cout << endl;
    cout << "이름 : " << name << endl;
    cout << "국어 : " << korean << endl;
    cout << "컴퓨터 : " << computer << endl;
    cout << "과학 : " << science << endl;
    cout << "도덕 : " << moral << endl;
    cout << "-------------------" << endl;
    cout << "평균 : " << getAverage() << endl;
    cout << endl;
  }

private:
  int science;
  int moral;
};

class ThirdGrade : public Student
{
public:
  ThirdGrade(string name, int korean, int computer, int english, int history)
      : Student(name, korean, computer), english(english), history(history) {}

  float getAverage()
  {
    return (korean + computer + english + history) / 4.0f;
  }

  void display()
  {
    cout << "이름 : " << name << endl;
    cout << "국어 : " << korean << endl;
    cout << "컴퓨터 : " << computer << endl;
    cout << "영어 : " << english << endl;
    cout << "역사 : " << history << endl;
    cout << "-------------------" << endl;
    cout << "평균 : " << getAverage() << endl;
  }

private:
  int english;
  int history;
};

int main()
{
  FirstGrade f("홍길동", 90, 81, 88);
  SecondGrade s("장영실", 73, 91, 99, 68);
  ThirdGrade t("정도전", 81, 53, 80, 96);

  f.display();
  s.display();
  t.display();

  return 0;
}
