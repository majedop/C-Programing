#include <stdio.h>
void solve()
{
  int n;
  scanf("%d",&n);
  int ara[5];
  for (int  i = 1; i <=3; i++)
  scanf("%d",&ara[i]);

  if(ara[n]!=0 && ara[ara[n]]!=0)
  printf("YES\n");
  else
  printf("NO\n");
}
int main()
{
  int t;
  scanf("%d",&t);
  while (t--)
  {
    solve();
  }
  
}