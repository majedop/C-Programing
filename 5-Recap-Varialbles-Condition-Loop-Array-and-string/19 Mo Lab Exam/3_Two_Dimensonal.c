#include <stdio.h>
int main()
{
  int n,m;
  scanf("%d %d",&n,&m);
  int mtrx[101][101];
  int i,j;
  for ( i = 1; i <=n; i++)
  {
    for(j=1; j<=m; j++)
    scanf("%d",&mtrx[i][j]);
  }

  for(i=1; i<=n; i++)
  {
    for(j=1; j<=m; j++)
    {
      if(i==mtrx[i][j] && j==mtrx[i][j] && i==j )
        mtrx[i][j]+=3;

      else if(i==mtrx[i][j])
        mtrx[i][j]+=2;

      else if(j==mtrx[i][j])
       mtrx[i][j]+=1;
    }
  }
  for(i=1; i<=n; i++)
  {
    for(j=1; j<=m; j++)
      printf("%d ",mtrx[i][j]);

    printf("\n");
  }

  return 0;
  }