#include <stdio.h>

int main()
{
  int height, weight, Obsty;

  printf("");
  scanf("%d %d", &height, &weight);

  Obsty = weight + 100 - height;
  printf("%d\n", Obsty);

  if (Obsty > 0)
  {
    printf("Obesity\n");
  }

  return 0;
}