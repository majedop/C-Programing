#include <stdio.h>
struct Parsion
{
  int roll;
  char name[39];
  int age;
  float waight;
  
};
int main()
{
  struct Parsion p1 = {.waight=5.6, .age = 18, .name = "Majedul Islam", .roll= 584431};
  
  printf("Roll= %d\nName= %s\nAge= %d\nWaigth= %f",p1.roll,p1.name ,p1.age,p1.waight);
  

  return 0;
}