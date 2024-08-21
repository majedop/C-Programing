#include <stdio.h>

int main()
{
int n;
scanf("%d",&n);

int i,j;
//1st row
for(i=1; i<=n; i++)
{
  printf("%d",i);
}
printf("\n");

//spach and 
for ( i = 2; i <n; i++)
{
  printf("%d",i);
  for ( j = 1; j <=n-2; j++)
  {
    printf(" ");
  }

  printf("%d\n",i);
}


//last row
for ( i =n; i>=1; i--)
{
  printf("%d",i);
}

  return 0;
}