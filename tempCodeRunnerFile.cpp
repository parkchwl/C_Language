#include <iostream>

class CoffeeMachine
{
private:
  int coffee;
  int water;
  int sugar;

public:
  CoffeeMachine(int initialCoffee, int initialWater, int initialSugar)
  {
    coffee = initialCoffee;
    water = initialWater;
    sugar = initialSugar;
  }

  void drinkEspresso()
  {
    if (coffee >= 1 && water >= 1)
    {
      coffee -= 1;
      water -= 1;
    }
    else
    {
      std::cout << "재료가 부족하여 에스프레소를 만들 수 없습니다." << std::endl;
    }
  }

  void drinkAmericano()
  {
    if (coffee >= 1 && water >= 2)
    {
      coffee -= 1;
      water -= 2;
    }
    else
    {
      std::cout << "재료가 부족하여 아메리카노를 만들 수 없습니다." << std::endl;
    }
  }

  void drinkSugarCoffee()
  {
    if (coffee >= 1 && water >= 2 && sugar >= 1)
    {
      coffee -= 1;
      water -= 2;
      sugar -= 1;
    }
    else
    {
      std::cout << "재료가 부족하여 설탕 커피를 만들 수 없습니다." << std::endl;
    }
  }

  void fill()
  {
    coffee = 10;
    water = 10;
    sugar = 10;
  }

  void show()
  {
    std::cout << "커피머신 상태 : 커피 = " << coffee << "\t물 = " << water << "\t설탕 = " << sugar << std::endl;
  }
};

int main()
{
  CoffeeMachine java(5, 8, 2);

  java.drinkAmericano();
  java.show();

  java.drinkSugarCoffee();
  java.show();

  java.drinkEspresso();
  java.show();

  java.drinkSugarCoffee();
  java.show();

  java.drinkSugarCoffee();
  java.show();

  java.drinkAmericano();
  java.show();

  java.fill();
  java.show();

  return 0;
}
