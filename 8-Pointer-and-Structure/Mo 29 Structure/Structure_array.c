#include <stdio.h>
struct Student
{
  double weight;
  int roll;

};
int main()
{

  struct Student s[5];
  for (int i = 0; i < 5; i++)
  {
    scanf("%d %lf",&s[i].roll, &s[i].weight);
  }

  for (int i = 0; i < 5; i++)
  {
    printf("Roll = %d Weight= %lf\n",s[i].roll, s[i].weight);
  }
  
  return 0;
}