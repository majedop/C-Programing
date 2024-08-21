#include <stdio.h>
int main()
{
  int n,temp, count=0;
  scanf("%d",&n);
  int a[n+1];
  int i,j;

  for ( i = 0; i < n; i++)
  {
    scanf("%d",&a[i]);
  }

  for ( i = 0; i < n; i++)
  {
    temp=0;

    for ( j = 2; j <=10; j++)
    {
      if (a[i]%j==0)
      {
        temp=1;
        break;
      }
    }

      if (temp==0)
      printf("%d ",a[i]);
  }
      return 0;
}