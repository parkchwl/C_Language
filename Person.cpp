#include <iostream>
using namespace std;

#include "Person.h"

void Person::setHeight(int h)
{
  height = h;
}
void Person::setWeight(int w)
{
  weight = w;
}
void Person::setBoth(int h, int w)
{
  height = h;
  weight = w;
}
int Person::getHeight() { return height; }
int Person::getWeight() { return weight; }