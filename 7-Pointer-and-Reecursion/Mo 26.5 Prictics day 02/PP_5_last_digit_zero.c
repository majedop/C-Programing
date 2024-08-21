#include <stdio.h>
int last_digit_zero_sum(int ara[], int n)
{
  int sum=0;
  for (int i = 0; i < n; i++)
  {
   if(ara[i]%10==0)
    sum+=ara[i];
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
   int ans= last_digit_zero_sum(ara,n);
   printf("%d",ans);
   
}