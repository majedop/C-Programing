#include <stdio.h>
#include <string.h>
int main()
{
  int n,m;
  scanf("%d %d",&n,&m);
  int mtrx[n][m];
  int i,j;
  for ( i = 0; i <n; i++)
  {
    for(j=0; j<m; j++)
    scanf("%d",&mtrx[i][j]);
  }
  int ara[n][m];
 for(i=0; i<n; i++)
 {
  for(j=0; j<m; j++)
   scanf("%d",&ara[i][j]);
 }

 for ( i = 0; i < n; i++)
 {
  for(j=0; j<m; j++)
  {
    mtrx[i][j]+=ara[i][j];
  }
 }
 for ( i = 0; i < n; i++)
 {
  printf("\n");
  for(j=0; j<m; j++)
  {
   printf("%d ",mtrx[i][j]);
  }
  printf("\n");
 }

    
 
  return 0;
}
