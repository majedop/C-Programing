#include <stdio.h>
int main()
{
  int n=3;
  int mtrx[n][n];
  int i,j;
  for(i=0; i<n; i++)
  {
    for(j=0; j<n; j++)
    scanf("%d",&mtrx[i][j]);
  }

  int sum=0,sum1,sum2,flag=0;
  for ( i = 0; i < n; i++)
  {
   for(j=0; j<n; j++)
   {
    if(i==j)
    sum=sum+mtrx[i][j];
   }
  }
  for(i=0; i<n; i++)
  {
    sum1=0;
    for(j=0; j<n; j++)
     sum1=sum1+mtrx[i][j];

    if(sum==sum1)
    flag=1;
    else
    flag=0;
    break;
   }

  
    for(i=0; i<n; i++) 
    {
      sum2=0;
      for(j=0; j<n; j++)
      sum2=sum2+mtrx[j][i];

    if(sum==sum2)
    flag=1;
    else
    flag=0;
    break;
    }

  if(flag==1)
  printf("Yes");
  else
  printf("No");
    return 0;
}