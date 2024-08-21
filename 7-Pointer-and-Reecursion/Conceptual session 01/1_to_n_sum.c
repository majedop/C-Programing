#include <stdio.h>
// 1 to n, sum number print
int func(int n)
{
  if(n>0)
  return func(n-1)+n;

  return 0;
}
int main()
{
  int n;
  scanf("%d",&n);
  int ans=func(n);
  printf("%d",ans);
}