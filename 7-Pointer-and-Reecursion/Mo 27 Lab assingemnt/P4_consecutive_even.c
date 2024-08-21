#include <stdio.h>
void consecutive_even(int n)
{
  int x=(n-12)/4;
  printf("%d %d %d %d",x,x+2,x+4,x+6);
  printf("\n");
}
int main()
{
  int t;
  scanf("%d",&t);
  while (t--)
  {
    int n;
    scanf("%d",&n);
    consecutive_even(n);
  }
  return 0;
}