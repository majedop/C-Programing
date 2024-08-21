#include <stdio.h>
int main()
{
  int n=3;
  int ara[n][n];
  for (int i = 0; i < n; i++)
  {
    for(int j=0; j<n; j++)
    scanf("%d",&ara[i][j]);
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("%d ",ara[j][i]);
    }
    printf("\n"); 
  }
  return 0;
}