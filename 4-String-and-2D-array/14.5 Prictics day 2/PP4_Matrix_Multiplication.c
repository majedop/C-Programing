#include <stdio.h>
int main()
{
  int row,clm;
  scanf("%d %d",&row,&clm);
  int first[row][clm];
  int second[row][clm];
  int mul[row][clm];
  int i,j,k;
  for ( i = 0; i < row; i++)
  {
    for(j=0; j<clm; j++)
      scanf("%d",&first[i][j]);
  }
  for(i=0; i<row; i++)
  {
    for(j=0; j<clm; j++)
    scanf("%d",&second[i][j]);
  }

  int sum;
  for ( i = 0; i < row; i++)
  {
    for(j=0; j<clm; j++)
    {
     
      for ( k = 0; k<clm; k++)
      {
        sum=sum+first[i][k]*second[k][j];
      }
      mul[i][j]=sum;
      sum=0;

    }
  }
  for ( i = 0; i < row; i++)
  {
    for(j=0; j<clm; j++)
  {
    printf("%d ",mul[i][j]);
  }
printf("\n");
  }
  
  return 0;
}