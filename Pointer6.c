#include <stdio.h>

void get_sum_product(int x, int y, int *psum, int *pproduct);
int main()
{
  int sum, product;
  get_sum_product(123, 456, &sum, &product);
  printf("sum = %d, product = %d\n", sum, product);
}

void get_sum_product(int x, int y, int *psum, int *pproduct)
{
  *psum = x + y;
  *pproduct = x * y;
}