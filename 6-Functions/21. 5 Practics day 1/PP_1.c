#include <stdio.h>
void fact(int a);
int main()
{
  int n;
  scanf("%d",&n);
  fact(n);

  return 0;
}
// fuinction
void fact(int a)
{
  if(a>=0)
  {
    int i=a;
    while (i>=-a)
    {
      printf("%d ",i);
      i--;
    }  
  }
  else 
  {
    int i=a;
    while (i<=-a)
    {
      printf("%d ",i);
      i++;
    } 
  }
}