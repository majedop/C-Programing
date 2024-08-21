#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);

  int i,j;
  printf("#\n");
  for ( i = 1; i<n; i++)
  {
   printf("#");
   for ( j = 1; j<i; j++)
   {
    printf(" ");
   }
   printf("#\n");
  }
  for ( i = 0; i <n+1; i++)
  {
    printf("#");
  }
  
  
  
  
  
 

  return 0;
}