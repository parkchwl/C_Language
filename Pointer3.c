#include <stdio.h>

int main()
{
  int x = 10;
  int *p = &x; // p는 x의 주소로 초기화된다.

  printf(" x = %d\n", x);
  printf("&x = %p\n", &x); //&x는 주소 값이므로 %p로 출력한다. [%p : 포인터의 주소를 출력한다.]

  printf(" p = %p\n", p);
  printf("*p = %d\n", *p); //*p는 int형 변수이므로 %d로 출력한다.
  printf("&p = %p\n", &p); // 포인터도 변수이므로 주소가 있다.

  *p = 20;                 // x = 20;으로 수행된다.
  printf("*p = %d\n", *p); // printf("*p = %d\n", x);로 수행된다.

  return 0;
}