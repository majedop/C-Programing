#include <stdio.h>
int main()
{ 
  int row=5,collm=4;
  int ara[row][collm];
  int i,j;
  for ( i = 0; i < row; i++)
  {
    for(j=0; j<collm; j++)
    {
      scanf("%d",&ara[i][j]);
    }
  }
  for ( i = 0; i < row; i++)
  {
    for(j=0; j<collm; j++)
    {
      printf("%d ",ara[i][j]);
    }

    printf("\n");
  }
   
  



  return 0;
}