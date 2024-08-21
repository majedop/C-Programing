#include <stdio.h>

int main()
{
  //Nested loop 
int i,j;

for ( i = 1; i <=5; i++)
{
  printf("%d ",i);
  for ( j = 0; j < 8; j++)
  {
    printf("*");
  } 
printf("\n");
}
  return 0;
}