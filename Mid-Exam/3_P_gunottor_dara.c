#include <stdio.h>
int main()
{
  int n=15;
  int temp[100];
  int i,first=1;
  temp[0]=first;
  for(i=1; i<n; i++)
  {
  first*=2;
  temp[i]=first;
  }
  for ( i = 0; i < n; i++)
  {
   printf("%d ",temp[i]);
  }
  
  return 0;
}