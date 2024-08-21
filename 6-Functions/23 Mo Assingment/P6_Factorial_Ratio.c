#include <stdio.h>
int fact(int x)
{ 
  int mul=1;
  for (int i = 1; i <=x; i++)
  {
    mul*=i;
  }
  return mul;
}
float ratio(int x, int y)
{
  float ans=fact(x)/fact(y);
  return ans;
}
int main()
{

  int a,b;
  scanf("%d %d",&a,&b);
  float ans= ratio(a,b);
  printf("%f",ans);

  return 0;
}