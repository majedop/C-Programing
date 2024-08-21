#include <stdio.h>

int main()
{
 int n;
 scanf("%d",&n);

 int i,j;
 //1st line 
 for ( i = 1; i <=2; i++)
 {
  for ( j = 1; j <=i; j++)
  {
    printf("*");
  }
  printf("\n");
 }

//collom and spaces
 for ( i = 1; i <=n-3; i++)
 {
  printf("*");
  for ( j= 1; j <=i; j++)
  {
    printf(" ");
  }
  printf("*\n");
 }

//last line
 for ( i = 1; i <=n; i++)
 {
  printf("*");
 }

  return 0;
}