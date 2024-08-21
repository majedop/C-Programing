#include <stdio.h>

int main()
{
  //Triangle Piramid
int r,c,s;
int n;
scanf("%d",&n);

for(r=1; r<=n; r++)
{
  for(s=1; s<=n-r; s++)
  {
    printf(" ");
  }
  for(c=1; c<=r*2-1; c++)
  {
    printf("*");
  }
  printf("\n");
}
  return 0;
}