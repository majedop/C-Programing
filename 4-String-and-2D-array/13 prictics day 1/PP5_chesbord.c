#include <stdio.h>
int main()
{
  int i,j,R;
  scanf("%d",&R);

  int row=3,clm=3;
  int bord[row+1][clm+1];
  for ( i = 1; i <=row; i++)
  {
    for(j=1; j<=clm; j++)
    bord[i][j]=0;
  }
  int x,y;
  for(i=1; i<=R; i++)
  {
    scanf("%d %d",&x,&y);
    bord[x][y]=1;
  }

  for(i=1; i<=row; i++)
  {
    for(j=1; j<=clm; j++)
    {
      if(bord[i][j]==0)
      printf("%d%d ",i,j);
    }
    printf("\n");
  }

 

  return 0;
}