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
  struct content c1 =
      {
          "Avengers",
          11000,
          8.8};
}