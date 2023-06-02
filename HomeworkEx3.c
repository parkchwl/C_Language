#include <stdio.h>

#define SIZE 64

int my_strlen(const char *p);
void my_strcpy(char *p1, const char *p2);
int my_strcmp(const char *p1, const char *p2);
void makeUpper(char p[]);
void makeReverse(char p[]);
void strSwap(char *p1, char *p2);
void swap(char *a, char *b);

int main()
{
  char str1[SIZE], str2[SIZE], str3[SIZE];
  printf("문자열(str1) 입력: ");
  fgets(str1, SIZE, stdin);
  str1[my_strlen(str1) - 1] = '\0'; // fgets로 입력받은 문자열의 마지막 개행 문자를 널 문자로 대체

  printf("\nstr1의 길이 : %d\n", my_strlen(str1));

  my_strcpy(str2, str1);
  printf("\nstr2 = %s\n", str2);

  makeUpper(str2);
  printf("\nstr1을 대문자로 변환 = %s\n", str2);

  makeReverse(str2);
  printf("\nstr2의 역순 = %s\n", str2);

  int result;
  my_strcpy(str3, str1);
  if (!my_strcmp(str1, str3))
    printf("\n%s == %s\n", str1, str3);

  if ((result = my_strcmp("abc", "abcd")) != 0)
    printf("\nstrcmp(\"abc\", \"abcd\") = %d\n", result);

  if ((result = my_strcmp("C++", "C")) != 0)
    printf("\nstrcmp(\"C++\", \"C\") = %d\n\n", result);

  my_strcpy(str3, "C is powerful");
  printf("------ strSwap() 함수 호출 전---------\n");
  printf("str1 = %s\nstr3 = %s\n", str1, str3);

  strSwap(str1, str3);
  printf("------ 첫 번째 strSwap() 함수 호출 후-------\n");
  printf("str1 = %s\nstr3 = %s\n", str1, str3);

  strSwap(str1, str3);
  printf("------ 두 번째 strSwap() 함수 호출 후-------\n");
  printf("str1 = %s\nstr3 = %s\n", str1, str3);

  return 0;
}

int my_strlen(const char *p)
{
  int len = 0;
  while (*p != '\0')
  {
    len++;
    p++;
  }
  return len;
}

void my_strcpy(char *p1, const char *p2)
{
  while (*p2 != '\0')
  {
    *p1 = *p2;
    p1++;
    p2++;
  }
  *p1 = '\0';
}

int my_strcmp(const char *p1, const char *p2)
{
  while (*p1 != '\0' || *p2 != '\0')
  {
    if (*p1 < *p2)
      return -1;
    else if (*p1 > *p2)
      return 1;
    p1++;
    p2++;
  }
  return 0;
}

void makeUpper(char p[])
{
  while (*p != '\0')
  {
    if (*p >= 'a' && *p <= 'z')
      *p -= 32; // 소문자를 대문자로 변환
    p++;
  }
}

void makeReverse(char p[])
{
  char *start = p;
  char *end = p + my_strlen(p) - 1;
  while (start < end)
  {
    swap(start, end);
    start++;
    end--;
  }
}

void strSwap(char *p1, char *p2)
{
  while (*p1 != '\0' && *p2 != '\0')
  {
    swap(p1, p2);
    p1++;
    p2++;
  }
}

void swap(char *a, char *b)
{
  char temp = *a;
  *a = *b;
  *b = temp;
}