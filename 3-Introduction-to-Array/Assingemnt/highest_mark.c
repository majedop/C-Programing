#include <stdio.h>
int main()
{
  int n,i,need=0;
  scanf("%d",&n);
  int marks[n];
  for ( i = 0; i < n; i++)
  {
    scanf("%d",&marks[i]);
  }
  
  int highest=marks[0];
  for(i=1; i<n; i++)
  {
    if (marks[i]>highest)
      highest=marks[i];  
  }
  for ( i = 0; i <n; i++)
  {
    need=highest-marks[i];
    printf("%d ",need);
  }
  

}