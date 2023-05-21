#include <stdio.h>
#include <math.h>

int main()
{
  double a = 0;

  printf("yard? ");
  scanf("%lf", &a);

  double cm = round(a * 91.44 * 10) / 10.0;
  printf("%.1lfyard = %.1lfcm\n", a, cm);
  return 0;
}