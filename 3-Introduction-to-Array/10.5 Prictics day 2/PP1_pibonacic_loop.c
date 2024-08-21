#include <stdio.h>
int main()

{
  //It’s a Fibon acci sequence.
  
  int n, i;
  int fibo, first, second;
  fibo=0; first=0; second=1;

  scanf("%d",&n);

  for ( i = 0; i <n; i++)
  {
    if (i<=1)
    {
      fibo=i;
    }
    else
    {
      fibo=first+second;
         first=second;
         second=fibo;
    }
    printf("%d ",fibo);
  }
 
  return 0;
}