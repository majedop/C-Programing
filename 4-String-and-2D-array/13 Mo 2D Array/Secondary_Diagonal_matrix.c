#include <stdio.h>
int main()
{
  int row,clm;
  scanf("%d %d",&row, &clm);
  int mrtx[row][clm];
  int i,j;
  for(i=0; i<row; i++)
  {
    for(j=0; j<clm; j++)
    scanf("%d",&mrtx[i][j]);
  }
  
  if (row!=clm)
    printf("Noy secondary Diagonal.");
  
  if(row==clm)
  {
    int flag=1;
    for ( i = 0; i < row; i++)
    {
      for(j=0; j<clm; j++)
    {
      if(i+j==row-1)
      continue;
      else if(mrtx[i][j]!=0)
      flag=0;
    }
    }
    if (flag==1)
     printf("secondary Diagonal.");
  
    else
    printf("Not secondary Diagonal.");

  }
  
  


  return 0;
}