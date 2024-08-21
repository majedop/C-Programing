#include <stdio.h>

int main()
{
  // take one integer N as input and print from 1 to N.

  int n;
  scanf("%d",&n);

  if(n<0)
  {
    for(int i=0; i>=n; i--)
    printf("%d ",i);
  }
  else
  {
    for(int i=1; i<=n; i++)
    printf("%d ss",i);
  }
  return 0;
}