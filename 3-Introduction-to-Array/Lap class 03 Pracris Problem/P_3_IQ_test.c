#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int ara[n];

  int i;
  for ( i = 1; i <= n; i++)
  {
    scanf("%d",&ara[i]);
  }
  int even=0;
  int odd=0;
  int ans;

int sum,rum;
  for ( i = 1; i <=n; i++)
  {
    if (ara[i]%2==0)
     even++;

    else
      odd++;
  }

  if (even==1)
   for ( i = 1; i <=n; i++)
   {
     
    if (ara[i]%2==1)  //jodi hoy ta hole even ar potion khuie ber korbo
      ans=i; 
      break;
   }

  else 
  for ( i = 1; i <=n; i++)
  {
    if (ara[i]%2==1)
        ans=i;  
  }
  printf("%d",i);
  return 0;
}