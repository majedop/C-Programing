#include <stdio.h>

int main()
{
  //Hollow pettern , squer, rectangle
int i,j,r;
int n;
scanf("%d",&n);

//1st row;
for(r=1; r<=n; r++)
{
  printf("#");
}
printf("\n");

// 1 and 2 collom and n-2 spach
for(i=1; i<=n-2; i++)
{
  printf("#");
for(j=1; j<=n-2; j++)
{
  printf(" ");
}
  printf("#\n");
}

//2n rwo
for(r=1; r<=n; r++)
{
  printf("#");
}
printf("\n");

  return 0;
}