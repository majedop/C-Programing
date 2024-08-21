
#include <stdio.h>
struct Persion
{
  int a;
  float b;
};
int main()
{
  struct Persion p1;
  p1.a = 50;
  p1.b = 30;
  return 0;
}

#include <stdio.h>
struct Student
{
  int a;
  char name[50];
};
int main()
{
  struct Student s1 = {50, "kazi Majedul Islam"};
  struct Student *ptr = &s1;
  printf("%d\n", ptr->a);
  printf("%s\n", ptr->name);

  return 0;
}