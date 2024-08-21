#include <stdio.h>
int main()
{
  int i,j;
  int row=8,clm=8;
  int chess[row+1][clm+1];
  for(i=1; i<=row; i++)
  {
    for(j=1; j<=clm; j++)
    chess[i][j]=0;
  }
  
  int n,x,y;
  scanf("%d",&n);
  for ( i = 1; i <=n; i++)
  {
    scanf("%d %d",&x,&y);
    chess[x][y]=1;
  }


  int count;
  for(i=1; i<=row; i++)
 {
  count=0;
  for(j=1; j<=clm; j++)
  {
   if(chess[i][j]==1)
    count++;
   if(count>=2)
    {
      for(j=1; j<=clm; j++)
      chess[i][j]=0;
    }
  } 
 }

 for(i=1; i<=row; i++)
 {
  for(j=1; j<=clm; j++)
  {
    if(chess[i][j]==1)
   printf("%d %d",i,j);
  }
  printf("\n");
 }


  return 0;
}