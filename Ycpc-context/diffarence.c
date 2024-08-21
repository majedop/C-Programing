#include <stdio.h>

int main()
{
  int a,b;
  int d;
  
  scanf("%d %d",&a,&b);

  if (a>b)
  {
    d=a-b;
  }
  else
  {
    d=b-a;
  }
  printf("%d",d);
  return 0;
}