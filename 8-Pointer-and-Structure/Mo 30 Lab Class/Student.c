#include <stdio.h>
struct Student
{
  int roll;
  char name[39];
  float marks;
};
void output(struct Student s)
{

 
   printf("%d\n",s.roll);
  printf("%s\n",s.name);
  printf("%f\n",s.marks);
 
}
int main()
{
  struct Student cls[5];
  for (int i = 0; i < 5; i++)
  {
    scanf("%d",&cls[i].roll);
    scanf("%s",cls[i].name);
    scanf("%f",&cls[i].marks);
  }
  
  printf("\n");
  for (int i = 0; i < 5; i++)
  {
    if(cls[i].roll%2==0)
    output(cls[i]);
  }
  


  return 0;
}