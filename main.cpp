#include <iostream>
using namespace std;

#include "Person.h"

int main()
{
  Person A;
  A.setHeight(180);
  A.setWeight(75);

  Person B;
  B.setHeight(169);
  B.setWeight(62);

  Person C;
  C.setBoth(181, 72);

  cout << "사람 A : " << A.getHeight() << "cm / " << A.getWeight() << "kg" << endl;
  cout << "사람 B : " << B.getHeight() << "cm / " << B.getWeight() << "kg" << endl;
  cout << "사람 C : " << C.getHeight() << "cm / " << C.getWeight() << "kg" << endl;
}
