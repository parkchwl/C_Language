#include <iostream>

using namespace std;

class Car
{
private:
  int speed;

public:
  Car() : speed(0) {}

  void speedUp(int increment)
  {
    speed += increment;
  }

  void speedDown(int decrement)
  {
    speed -= decrement;
    if (speed < 0)
    {
      speed = 0;
    }
  }

  int getSpeed() const
  {
    return speed;
  }

  void setSpeed(int newSpeed)
  {
    speed = newSpeed;
  }
};

class SportsCar : public Car
{
private:
  bool turbo;

public:
  SportsCar() : turbo(false) {}

  void setTurbo(bool mode)
  {
    turbo = mode;
  }

  bool getTurbo() const
  {
    return turbo;
  }

  void superTurbo()
  {
    setSpeed(200);
    setTurbo(true);
  }
};

int main()
{
  SportsCar c;
  c.setSpeed(60);
  c.setTurbo(true);

  cout << "현재 속도 = " << c.getSpeed() << endl;
  cout << "터보 모드 = " << c.getTurbo() << endl;

  c.setTurbo(false);
  c.speedDown(20);

  cout << "현재 속도 = " << c.getSpeed() << endl;
  cout << "터보 모드 = " << c.getTurbo() << endl;

  c.superTurbo();

  cout << "현재 속도 = " << c.getSpeed() << endl;
  cout << "터보 모드 = " << c.getTurbo() << endl;

  return 0;
}
