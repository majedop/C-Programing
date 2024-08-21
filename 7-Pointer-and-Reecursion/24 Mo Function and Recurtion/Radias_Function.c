#include <stdio.h>
int get_input()
{
  int n;
  printf("Enter the ratio of circle area: ");
  scanf("%d",&n);
  return n;
}
float PI()
{
  return 3.1416;
}
void Area_output(float x)
{
  printf("%f",x);
}
int main()
{
 int r;
 r=get_input();
 float ans=PI()*r*r;
Area_output(ans);
 
}