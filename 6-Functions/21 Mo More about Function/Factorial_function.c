#include <stdio.h>
int fact(int n);
int main()
{
  for (int i = 0; i < 4; i++)
  {
  int a,ans=0;
  scanf("%d",&a);
  ans=fact(a);
  printf("%dFactorial is : %d\n",a,ans);
  }
  
  return 0;
}
int fact(int n)
{
  int i,mul=1;
  for(i=1; i<=n; i++)
  mul*=i;
  return mul;
}
