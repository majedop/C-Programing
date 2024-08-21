#include <stdio.h>
void position_set(int row, int clm, int chess[row][clm])
{
  for (int i = 1; i <=row; i++)
  {
    for (int j = 1; j <=clm; j++)
    {
      chess[i][j]=0;
    }
  }
  int n,x,y;
  scanf("%d",&n);
  for (int i = 1; i <=n; i++)
  {
   scanf("%d %d",&x,&y);
   chess[x][y]=1;
  } 
  
int count,safe=0;
  for (int i = 1; i <=row; i++)
  { count=0;
    for (int j = 1; j <=clm; j++)
    {
      if(chess[i][j]==1)
      count++;

     if(count>=2)
    {
      for (int j = 1; j <=clm; j++)
      chess[i][j]=0;
      safe=count;
    }
    }
   
  }  
  for (int i = 1; i <= row; i++)
{
  for (int j = 1; j <=clm; j++)
  {
    if(chess[i][j]==1)
    printf("%d%d ",i,j);
  }
  printf("\n");
}
}



int main()
{
  int row=8, clm=8;
  int chess[row+1][clm+1];
  position_set(row,clm,chess);
}