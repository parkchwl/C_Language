#include <iostream>
using namespace std;

class Convert
{
protected:
  double before;
  double after;

public:
  Convert(double value) : before(value), after(0.0) {}

  virtual void compute() = 0;
  virtual void display() = 0;

  virtual ~Convert() {}
};

class LtoG : public Convert
{
public:
  LtoG(double value) : Convert(value) {}

  void compute()
  {
    after = before / 3.7854;
  }

  void display()
  {
    cout << before << " 리터 = " << after << " 갤런" << endl;
  }
};

class CtoF : public Convert
{
public:
  CtoF(double value) : Convert(value) {}

  void compute()
  {
    after = (before * 9 / 5) + 32;
  }

  void display()
  {
    cout << before << " 섭씨 = " << after << " 화씨" << endl;
  }
};

class MtoKm : public Convert
{
public:
  MtoKm(double value) : Convert(value) {}

  void compute()
  {
    after = before * 1.609344;
  }

  void display()
  {
    cout << before << " 마일 = " << after << " 킬로미터" << endl;
  }
};

int main()
{
  Convert *p[3] = {new MtoKm(23.2), new LtoG(10.3), new CtoF(24.5)};

  for (int i = 0; i < 3; i++)
  {
    p[i]->compute();
    p[i]->display();
    delete p[i];
  }

  return 0;
}
