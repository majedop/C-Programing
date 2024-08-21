#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int data[n][n];
  int i,j,k;
  for ( i = 0; i < n; i++)
  {
   for(j=0; j<n; j++)
   scanf("%d",&data[i][j]);
  }

  for(i=0; i<n; i++)
  {
    for(j=0; j<n; j++)
    {
       if(i==j)
    {
      continue;
    }
    printf("%d ",data[i][j]);
    printf("%d ",data[j][i]);
    }
    printf("\n");
  }
  

  return 0;
}