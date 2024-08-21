#include <stdio.h>

int main()
{
  long long int n;
  scanf("%d",&n);

  while (n>1)
  {
    printf("%lld, ",n);
    if(n%2==1)
    {
      n=n-1;
    }
    else
    {
      n=n/2;
    }
   
  }
  printf("%lld",n);
}