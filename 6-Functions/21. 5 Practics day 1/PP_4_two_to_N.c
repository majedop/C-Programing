#include <stdio.h>
void fact(int n);
int main()
{
  int n;
  scanf("%d",&n);
  fact(n);
}
void fact(int n)
{
  for (int i = 1; i <=n; i++)
  {
    if(i%2==0)
    printf("%d ",i);
  }
}