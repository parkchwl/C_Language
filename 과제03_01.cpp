#include <iostream>
using namespace std;

class Student
{
public:
  int age;
  int height;
  int weight;

  Student() : age(0), height(0), weight(0) {}

  int getAge()
  {
    return age;
  }

  int getHeight()
  {
    return height;
  }

  int getweight()
  {
    return weight;
  }
};

int main()
{
  Student student_A;
  Student student_B;
  Student student_C;

  student_A.age = 20;
  student_A.height = 180;
  student_A.weight = 75;

  student_B.age = 22;
  student_B.height = 169;
  student_B.weight = 62;

  cout << "학생 A: " << student_A.getAge() << "살 / " << student_A.getHeight() << "cm / " << student_A.getweight() << "kg" << endl;
  cout << "학생 B: " << student_B.getAge() << "살 / " << student_B.getHeight() << "cm / " << student_B.getweight() << "kg" << endl;
  cout << "학생 C: " << student_C.getAge() << "살 / " << student_C.getHeight() << "cm / " << student_C.getweight() << "kg" << endl;

  return 0;
}