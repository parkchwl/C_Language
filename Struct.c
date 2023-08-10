#include <stdio.h>

#define MAX_STD 20

struct student
{
  char name[20];
  int kor, eng, math;
  double avg;
  int rank;
};

void input_student(struct student *p);
void display_student_arr(const struct student p[], int size);
void swap_student(struct student *p1, struct student *p2);
void sort_student_arr(struct student p[], int size);

int main()
{
  struct student classA[MAX_STD];
  int size;

  printf("A클래스의 실제 학생수 입력: ");
  scanf("%d", &size);

  for (int i = 0; i < size; i++)
  {
    input_student(classA + i);
  }

  sort_student_arr(classA, size);
  display_student_arr(classA, size);

  return 0;
}

void input_student(struct student *p)
{
  printf("\n이름 입력: ");
  scanf("%s", p->name);

  printf("국어: ");
  scanf("%d", &(p->kor));

  printf("영어: ");
  scanf("%d", &(p->eng));

  printf("수학: ");
  scanf("%d", &(p->math));

  p->avg = (p->kor + p->eng + p->math) / 3.0;
}

void display_student_arr(const struct student p[], int size)
{
  printf("\n--------------------------------------------------------------\n");
  printf("%-10s %-6s %-6s %-6s %-8s %-6s\n", "이름", "국어", "영어", "수학", "평균", "등수");
  printf("--------------------------------------------------------------\n");

  for (int i = 0; i < size; i++)
  {
    printf("%-10s %-6d %-6d %-6d %-8.2lf %-6d\n",
           p[i].name, p[i].kor, p[i].eng, p[i].math, p[i].avg, p[i].rank);
  }
}

void swap_student(struct student *p1, struct student *p2)
{
  struct student temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}

void sort_student_arr(struct student p[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      if (p[j].avg < p[j + 1].avg)
      {
        swap_student(&p[j], &p[j + 1]);
      }
    }
  }

  for (int i = 0; i < size; i++)
  {
    p[i].rank = i + 1;
  }
}
