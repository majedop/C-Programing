#include <stdio.h>
int fect(int ara[], int size)
{
  int sum=0;
  for ( int i = 0; i < size; i++)
  {
    sum+=ara[i]%10;
    sum+=ara[i]/1000;
  }
  return sum;
}

int main()
{
  int n,i;
  scanf("%d",&n);
  int ara[n];
  for ( i = 0; i < n; i++)
    scanf("%d",&ara[i]);
  
  int ans=fect(ara,n);
  printf("Sum= %d",ans);
  return 0;
}