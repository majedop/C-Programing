#include <stdio.h>
int func(int ara[], int size, int k)
{
  int count=0;
  for (int i = 0; i < size; i++)
   {
    if(ara[i]!=k)
    count++;
   }
   return count;
  
}
int main()
{
  int n,k;
  scanf("%d",&n);
  int ara[n];
  for (int i = 0; i <n; i++)
  scanf("%d",&ara[i]);

  scanf("%d",&k);
  int ans=func(ara,n,k);
  printf("%d",ans);
  
}