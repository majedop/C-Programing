#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int i,j,k;
  for(i=0; i<=n; i++)
  {
    for(k=1; k<=i; k++)
    {
      printf(" ");
    }
    for(j=1; j<=n-i; j++ )
    {
      printf("%d ",j);
    }
    printf("\n");
  }
  return 0;
}