#include <stdio.h>
int sum(int n)
{
  if(n>0)
  {
    return sum(n-1)+n;
  }
}
int main()
{
  int n;
  scanf("%d",&n);
  int ans=sum(n);
  printf("%d",ans);
}