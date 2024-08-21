#include <stdio.h>

int main()
{
  //Prime
 int n,i;
 scanf("%d",&n);

int count=0;
 for(i=2; i<n; i++)
 {
  if(n%i==0)
  {
  count=count+1;
  break;
  }
 }
 if (count==0)
 {
  printf("Prime");
 }
 else
 {
  printf("Composite");
 }
 
  return 0;
}