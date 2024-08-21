#include <stdio.h>
#include <math.h>
float f(int x,int y);
int absolute(int x);
int sqr(int y);

int main(){

  int a,b;
  scanf("%d%d",&a,&b);
  float ans=f(a,b);
  printf("%f",ans);
  return 0;
}
float f(int x,int y)
{
  float m=absolute(x-3)+sqr(y);
  return sqrt(m);
}
int absolute(int x)
{
  if(x>=0)
  return x;
  else
  return (-1)*x;
}
int sqr(int y)
{
  int s=(y+4)*(y+4);
  return s;
}