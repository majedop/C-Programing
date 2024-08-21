#include <stdio.h>
struct Person
{
  int age;
  float weight;
};
void display(struct Person p)
{
  printf("Age= %d\nWeight= %.1f\n\n",p.age,p.weight);
}
int main()
{
  struct Person p1,p2,p3;
  
  p1.age=18;
  p1.weight=5.3;
  display(p1);

  p2.age=19;
  p2.weight= 5.5;
  display(p2);

  p3.age=20;
  p3.weight=5.6;
  display(p3);


  return 0;
}