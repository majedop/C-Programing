#include <stdio.h>
void pettern(int x)
{
  int i,j;
  for ( i = x; i>=1; i--)
  {
    for ( j = 1; j<=x-i; j++)
      printf(" ");
      
    for(j=1; j<=i*2-1; j++)
    printf("*");

    printf("\n");
  } 
}
int main()
{
  int n;
  scanf("%d",&n);
  pettern(n);
}