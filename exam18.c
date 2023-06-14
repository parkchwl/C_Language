#include <stdio.h>
#include <string.h> //product 구조체, student 구조체

struct product
{
  char name[20];
  int price;
  int stock;
};

int main()
{
  struct product prd1;
  struct product prd2 = {"생수 2L", 9500, 20};

  prd1.price = 15000;
  prd1.stock = 30;
  strcpy(prd1.name, "커피믹스");

  printf("%s : %d원, 재고량=%d\n", prd1.name, prd1.price, prd1.stock);
  printf("%s : %d원, 재고량=%d\n", prd2.name, prd2.price, prd2.stock);

  return 0;
}