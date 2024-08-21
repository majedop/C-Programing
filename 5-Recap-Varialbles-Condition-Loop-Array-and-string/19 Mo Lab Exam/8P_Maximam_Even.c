#include <stdio.h>
int main()
{
  int n,ans=0,max_even=0,m;
  scanf("%d",&n);
  int i,ara[20];
  for(i=0; i<n; i++)
  scanf("%d",&ara[i]);

  int max=ara[0];
  for ( i = 0; i < n; i++)
  {
    if(ara[i]%2==0)
    {
    if(ara[i]>max)
    max=ara[i];
    }
    m=i;
    
  }
  for ( i = 0; i < n-1; i++)
  {
   if(m!=i)
   {
    ans=ara[i]+max;
    if(ans>max_even)
    max_even=ans;
   }
  }
  if(max_even%2==0)
  printf("%d",max_even);
  

  return 0;
}