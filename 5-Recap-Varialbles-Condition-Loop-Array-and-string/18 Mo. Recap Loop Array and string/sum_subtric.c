#include <stdio.h>
#include <math.h>
int main()
{
  int n,ans=0;
  scanf("%d",&n);
  int i;
  for(i=1; i<=n; i++)
  {
    if(i%2==0)
    ans-=pow(i,2);
    else
    ans+=pow(i,2);
  }
  printf("%d",ans);
}