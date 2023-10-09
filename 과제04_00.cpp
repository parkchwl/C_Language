#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class Circle
{
  int radius;
  char name[20];

public:
  void setCircle(char *name, int radius)
  {
    strncpy(this->name, name, sizeof(this->name));
    this->name[sizeof(this->name) - 1] = '\0';
    this->radius = radius;
  }
  double getArea() { return 3.14 * radius * radius; }
  char *getName() { return name; }
};

class CircleManager
{
  Circle *p;
  int size;

public:
  CircleManager(int size)
  {
    if (size <= 0)
    {
      cerr << "에러: 원의 개수는 0 이하일 수 없습니다." << endl;
      exit(1);
    }
    try
    {
      p = new Circle[size];
    }
    catch (bad_alloc &ex)
    {
      cerr << "에러: 동적 할당 실패 - " << ex.what() << endl;
      exit(1);
    }
    this->size = size;
  }

  ~CircleManager() { delete[] p; }
  Circle *getCircle() { return p; }
  void searchByName();
  void searchByArea();
};

void CircleManager::searchByName()
{
  char find[20];
  cout << "검색하고자 하는 원의 이름 >> ";
  cin >> find;

  for (int i = 0; i < size; i++)
  {
    if (strcmp(find, p[i].getName()) == 0)
    {
      cout << p[i].getName() << "의 면적은 " << p[i].getArea() << endl;
      break;
    }
  }
}

void CircleManager::searchByArea()
{
  int minArea;
  cout << "최소 면적을 정수로 입력하세요 >> ";
  cin >> minArea;
  cout << minArea << "보다 큰 원을 검색합니다." << endl;

  for (int i = 0; i < size; i++)
  {
    if (p[i].getArea() > minArea)
    {
      cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ", ";
    }
  }
  cout << endl;
}

int main()
{
  int numOfCircles;
  cout << "원의 개수 >> ";
  cin >> numOfCircles;

  CircleManager circles(numOfCircles);

  for (int i = 0; i < numOfCircles; i++)
  {
    cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
    char name[20];
    int r;
    cin >> name >> r;
    circles.getCircle()[i].setCircle(name, r);
  }
  circles.searchByName();
  circles.searchByArea();

  return 0;
}
