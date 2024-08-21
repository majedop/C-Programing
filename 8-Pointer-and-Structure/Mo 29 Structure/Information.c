#include <stdio.h>
struct  cmt
{
  int roll;
  char name[20];
  float cgpa;
};

int main()
{
  struct cmt s[5];
  for (int i = 0; i < 3; i++)
  {
    scanf("%d %s %f", &s[i].roll, &s[i].name, &s[i].cgpa);
  }
 
  int r;
  printf("Enter the roll: \n");
  scanf("%d",&r);

  for (int i = 0; i < 5; i++)
  {
    if(r==s[i].roll)
    printf("Roll = %d\nName = %s\nCGPA= %f",s[i].roll, s[i].name, s[i].cgpa);
  }
  
  

}