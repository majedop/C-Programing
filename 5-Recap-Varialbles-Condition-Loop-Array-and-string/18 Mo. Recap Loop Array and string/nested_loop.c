#include <stdio.h>
int main()
{
  int i,j;
  for ( i = 1; i < 6; i++)
  {
    for(j=0; j<(3*i); j++)
    printf("#");

    printf("\n");
  }
  
  return 0;
}