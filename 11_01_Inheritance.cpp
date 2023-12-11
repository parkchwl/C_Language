#include <iostream>
#include <string>
using namespace std;

class Car
{
  int speed;

public:
  void setSpeed(int s) { speed = s; }
  int getSpeed() { return speed; }
};

class SportsCar : public Car
{
  bool turbo;

public:
  void setTurbo(bool newValue) { turbo = newValue; }
  bool getTurbo() { return turbo; }
};

int main()
{
  SportsCar c;
  c.setSpeed(60);
  c.setTurbo(true);
  c.setSpeed(100);
  c.setTurbo(false);
  return 0;
}