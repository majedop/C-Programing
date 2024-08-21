#include <stdio.h>
void output(int* p, int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ",*p);
    p++;
  }
  
}
int main()
{
  int n;
  scanf("%d",&n);
  int ara[n];
  for (int i = 0; i < n; i++)
  scanf("%d",&ara[i]);

  output(&ara,n);
  
}