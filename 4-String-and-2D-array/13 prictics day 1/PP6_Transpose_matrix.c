#include <stdio.h>
int main()
{
  //Transpose matrix
  
  int row,clm;
  scanf("%d %d",&row,&clm);
  int mtrx[row][clm];
  int i,j;
  for(i=0; i<row; i++)
  {
    for(j=0; j<clm; j++)
    scanf("%d",&mtrx[i][j]);
  }
  for(i=0; i<row; i++)
  {
    for(j=0; j<clm; j++)
    printf("%d ",mtrx[j][i]);

    printf("\n");
  }
  
  return 0;
}