#include <stdio.h>
int main()
{
  //Scalar Matrix
  int row,clm;
  scanf("%d %d",&row,&clm);
  int smrtx[row][clm];
  int i,j;
  for ( i = 0; i < row; i++)
  {
    for(j=0; j<clm; j++)
    scanf("%d",&smrtx[i][j]);
  }
  if (row!=clm)
     printf("Not Scalar");
  
  if(row==clm)
  {
    int flag;
    int x=smrtx[0][0];
  for ( i = 0; i < row; i++)
  {
     flag=1;
    for(j=0; j<clm; j++)
    {
      if (i==j)
      {
         if(smrtx[i][j]!=x)
         flag=0;

        continue;
      }
      else if(smrtx[i][j]!=0)
          flag=0;
    } }
    if (flag==1)
      printf("Scalar");
    
    else
    printf("Not Scalar");
    
    
  }
  
  return 0;
}