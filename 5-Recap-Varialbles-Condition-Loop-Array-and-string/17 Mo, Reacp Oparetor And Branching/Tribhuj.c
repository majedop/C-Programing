#include <stdio.h>
#include <math.h>
int main()
{
  //area 
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  float s=0,area=0;
  s=((a+b+c)/2.0);
  printf("half %f\n",s);

  area=sqrt(s*(s-a)*(s-b)*(s-c));
  printf("Area = %f",area);

  return 0;
}