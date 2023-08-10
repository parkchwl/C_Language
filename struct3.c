#include <stdio.h>
#include <string.h>

struct content
{
  char title[40];
  int price;
  double rate;
};

int main()
{
  struct content c1 = {"Avengers", 11000, 8.8};
  struct content c2, c3;

  strcpy(c2.title, "Aquaman");
  c2.price = 5500;
  c2.rate = 7.1;

  strcpy(c3.title, "Shazam!");
  c3.price = 7700;
  c3.rate = 7.4;

  printf("c1 = %s, %d, %.1f\n", c1.title, c1.price, c1.rate);
  printf("c2 = %s, %d, %.1f\n", c2.title, c2.price, c2.rate);
  printf("c3 = %s, %d, %.1f\n", c3.title, c3.price, c3.rate);
}