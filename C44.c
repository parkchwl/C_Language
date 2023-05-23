#include <stdio.h>
int main()
{
  int x[4][3] = {{1, 2, 3}, {4, 5}, {6}};
  int i, j;
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
      x[3][j] += x[i][j];
  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 3; j++)
      printf("%2d ", x[i][j]);
    printf("\n");
  }
}