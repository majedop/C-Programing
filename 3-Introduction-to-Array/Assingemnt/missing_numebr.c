#include <stdio.h>
int main()
{
  int t,j,ans=0;
  scanf("%d",&t);
  for(j=0; j<t; j++)
{
    int i;
  int data[5];
  for ( i = 0; i<4; i++)
  {
    scanf("%d",&data[i]);
  }
  int sum=data[0];
  for ( i = 1; i <4; i++)
  {
    ans+=data[i];
  }
  ans=sum-ans;
  printf("%d\n",ans);
}

  return 0;
}