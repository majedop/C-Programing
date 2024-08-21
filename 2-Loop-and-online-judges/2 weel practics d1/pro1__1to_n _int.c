#include <stdio.h>

int main()
{
  // one positive integer N as input and print from 1 to N.

  int n;
  scanf("%d", &n);

  int i=1;
  while (i<=n)
  {
    if(i>0)
    {
      printf("%d ",i);
     i++;
    }
    {
  if(i<0)
    {
      int i=-1;
      printf("%d ",i);
      i--;
    }
    }


  }




}
