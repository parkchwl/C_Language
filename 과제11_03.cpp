#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
  string name;
  int age;

public:
  void setName(const string &newName)
  {
    name = newName;
  }

  string getName() const
  {
    return name;
  }

  void setAge(int newAge)
  {
    age = newAge;
  }

  int getAge() const
  {
    return age;
  }
};

class Student : public Person
{
private:
  string school;
  string degree;

public:
  void setSchool(const string &newSchool)
  {
    school = newSchool;
  }

  string getSchool() const
  {
    return school;
  }

  void setDegree(const string &newDegree)
  {
    degree = newDegree;
  }

  string getDegree() const
  {
    return degree;
  }
};

class Worker : public Student
{
private:
  string company;
  string job;

public:
  void setCompany(const string &newCompany)
  {
    company = newCompany;
  }

  string getCompany() const
  {
    return company;
  }

  void setJob(const string &newJob)
  {
    job = newJob;
  }

  string getJob() const
  {
    return job;
  }

  void showInfo() const
  {
    cout << getName() << "(" << getAge() << ")" << endl;
    cout << getSchool() << "(" << getDegree() << ")" << endl;
    cout << getCompany() << "(" << getJob() << ")" << endl;
  }
};

int main()
{
  Worker a;
  a.setName("김고대");
  a.setAge(30);
  a.setSchool("고려대학교");
  a.setDegree("학사");
  a.setCompany("Google");
  a.setJob("개발자");
  a.showInfo();

  return 0;
}
