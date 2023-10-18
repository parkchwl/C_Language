#include <iostream>

using namespace std;

int main()
{
  double height, weight;

  cout << "신장(m, 미터)을 입력하세요 >> ";
  cin >> height;

  cout << "체중(kg, 킬로그램)을 입력하세요 >> ";
  cin >> weight;

  double bmi = weight / (height * height);

  cout << "당신의 체질량지수(bmi)는 " << bmi << " 입니다" << endl;

  if (bmi >= 30)
  {
    cout << "30 이상이면 고도 비만입니다" << endl;
  }
  else if (bmi >= 25)
  {
    cout << "25 이상 30 미만이면 비만입니다" << endl;
  }
  else if (bmi >= 23)
  {
    cout << "23 이상 25 미만이면 과체중입니다" << endl;
  }
  else if (bmi >= 18.5)
  {
    cout << "18.5 이상 23 미만이면 정상입니다" << endl;
  }
  else
  {
    cout << "0 이상 18.5 미만이면 저체중입니다" << endl;
  }

  return 0;
}
