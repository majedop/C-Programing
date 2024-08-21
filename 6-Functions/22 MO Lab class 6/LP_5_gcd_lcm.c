#include <stdio.h>

int gcdd(int a, int b)
{
  for (int i = a; i>=1; i--)
  {
    if(a%i==0 && b%i==0)
       return i;
  } 
}
int lcm(int a,int b)
{
 int lcmm=(a*b)/gcdd(a,b);
 return lcmm;
}

int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  int ans=gcdd(a,b);
  printf("GCD is %d\n",ans);
  ans= lcm(a,b);
  printf("LCM is %d",ans);

  return 0;
}