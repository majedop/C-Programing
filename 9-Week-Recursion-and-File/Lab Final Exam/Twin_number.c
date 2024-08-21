#include <stdio.h>
int main()
{
  int n,s,dif,ans=0;

  scanf("%d %d",&n,&s);
  dif=s-n;
  ans=dif/2;
  printf("%d\n",ans);

  return 0;
}