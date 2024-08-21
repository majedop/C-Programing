#include <stdio.h>
int main()
{
   int n;
  int i;
  scanf("%d",&n);
  if(n>=0)
  {
    i=n;
    while (i>=-n)
    {
     printf("%d ",i);
    i--;
    } 
  }
  else
  {
    i=n;
    while(i<=-n)
    {
      printf("%d ",i);
      i++;
    }
  }
  return 0;
}