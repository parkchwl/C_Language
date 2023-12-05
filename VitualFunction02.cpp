#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
  string name;

protected:
  int korean;
  int computer;

public:
  void getName()
  {
    cout << "이름: " << name << "\t";
  }

  Student(string n, int k, int c) : name(n), korean(k), computer(c) {}

  virtual double getAverage() = 0;
  virtual void displayGrade() = 0;
  virtual ~Student() {}
};

class FirstGrade : public Student
{
private:
  int math;

public:
  FirstGrade(string n, int k, int c, int m) : Student(n, k, c), math(m) {}
  double getAverage()
  {
    return (korean + computer + math) / 3.0;
  }
  void displayGrade()
  {
    cout << "[1학년] ";
  }
  virtual ~FirstGrade() {}
};

class SecondGrade : public Student
{
private:
  int science;
  int moral;

public:
  SecondGrade(string n, int k, int c, int s, int m) : Student(n, k, c), science(s), moral(m) {}

  double getAverage()
  {
    return (korean + computer + science + moral) / 4.0;
  }

  void displayGrade()
  {
    cout << "[2학년] ";
  }

  virtual ~SecondGrade() {}
};

class ThirdGrade : public Student
{
private:
  int english;
  int history;

public:
  ThirdGrade(string n, int k, int c, int e, int h) : Student(n, k, c), english(e), history(h) {}

  double getAverage()
  {
    return (korean + computer + english + history) / 4.0;
  }
  void displayGrade()
  {
    cout << "[3학년] ";
  }
  virtual ~ThirdGrade() {}
};

int main()
{
  Student *p[4];
  p[0] = new FirstGrade("고길동", 80, 70, 70);
  p[1] = new SecondGrade("둘리", 70, 60, 90, 70);
  p[2] = new ThirdGrade("도치", 90, 100, 90, 100);
  p[3] = new SecondGrade("도우너", 80, 90, 60, 100);

  for (int i = 0; i < 4; i++)
  {
    p[i]->displayGrade();
    p[i]->getName();
    cout << "평균: " << p[i]->getAverage() << endl;
  }

  for (int i = 0; i < 4; i++)
  {
    delete p[i];
  }

  return 0;
}
