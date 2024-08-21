#include <stdio.h>
int fact(int ara[], int size)
{
  int sum=0;
  for(int i=0; i<size; i++)
{
  sum+=ara[i]%10;
  sum+=ara[i]/1000;
}
return sum;
}
int main()
{
  int n;
  scanf("%d",&n);
  int ara[n];
  for (int i = 0; i < n; i++)
  scanf("%d",&ara[i]);

  int ans=fact(ara,n);
  printf("Sum= %d",ans);
}
