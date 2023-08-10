#include <stdio.h>

typedef struct point
{
  int x, y;
} Point;

typedef struct rectangle
{
  Point leftUp;
  Point rightDown;
} Rect;

int Rectangle(Rect r);
int Area(const Rect *p);

int main()
{
  Rect rectangle;
  printf("사각형의 대각 점 좌표 입력\n");

  printf("왼쪽상단 좌표: ");
  scanf("%d %d", &rectangle.leftUp.x, &rectangle.leftUp.y);

  printf("오른쪽하단 좌표: ");
  scanf("%d %d", &rectangle.rightDown.x, &rectangle.rightDown.y);

  while (!Rectangle(rectangle))
  {
    printf("입력 오류!! 입력된 좌표값은 사각형이 성립되지 않습니다\n");

    printf("왼쪽상단 좌표: ");
    scanf("%d %d", &rectangle.leftUp.x, &rectangle.leftUp.y);

    printf("오른쪽하단 좌표: ");
    scanf("%d %d", &rectangle.rightDown.x, &rectangle.rightDown.y);
  }

  int area = Area(&rectangle);
  printf("사각형의 면적 = %d\n", area);

  return 0;
}

int Rectangle(Rect r)
{
  if (r.leftUp.x < r.rightDown.x && r.leftUp.y > r.rightDown.y)
    return 1;
  else
    return 0;
}

int Area(const Rect *p)
{
  int width = p->rightDown.x - p->leftUp.x;
  int height = p->leftUp.y - p->rightDown.y;
  int area = width * height;

  return area;
}
