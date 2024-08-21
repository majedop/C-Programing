#include <stdio.h>
#include <math.h>
int main()
{
  int i,sum=0;
  for(i=1; i<=5; i++)
  {
   sum+= pow(i,2);
  }
  printf("%d",sum);

  return 0;
}