#include <stdio.h>
struct Student
{
  char name[40], email[48],data[49];
  int roll;
  float marks;
};
struct Student s1[20];

void input(int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("Enter information for Student %d\n\n",i+1);
    fflush(stdin);

    printf("Enter name: ");
    gets(s1[i].name);
    fflush(stdin);
    printf("Enter roll: ");
    scanf("%d",&s1[i].roll);
    fflush(stdin);
    printf("Enter Emaile: ");
    gets(s1[i].email);
    fflush(stdin);
    printf("Enter date: ");
    gets(s1[i].data);
    printf("Enter marks: ");
    scanf("%f",&s1[i].marks);
  }
  printf("\n\n\n");
}

void display(int n,int r)
{

 for (int i = 0; i < n; i++)
 {
  if(r==s1[i].roll)
  {
  printf("Information of Student %d\n",i+1);

  printf("Name =%s\n",s1[i].name);
  printf("Roll =%d\n",s1[i].roll);
  printf("Email =%s\n",s1[i].email);
  printf("Date =%s\n",s1[i].data);
  printf("Marks =%.2f\n",s1[i].marks*0.8);
  }
 }
 printf("\n\n");
}

int main()
{
  int n;
  printf("Enter the student number: ");
  scanf("%d",&n);
  input(n);
  int r;
  printf("Enter roll: ");
  scanf("%d",&r);
  display(n,r);

  return 0;
}