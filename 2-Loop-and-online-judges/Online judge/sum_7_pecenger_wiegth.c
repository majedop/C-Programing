#include <stdio.h>

int main()
{
  int n, i, w;
  int sum = 0;
  printf("Enter the numebr: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    scanf("%d",&w);
    sum=sum+w;
  }
  printf("%d Total sum of ",sum);
  return 0;
}