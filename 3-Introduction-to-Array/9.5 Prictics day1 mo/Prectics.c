#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);

  int ara[n];
  int i, j;
  for (i = 1; i <= n; i++)
  {
    scanf("%d", &ara[i]);
  }

  for (i = 1; i <= n; i++)
  {
    printf("%d-", ara[i]);

    for (j = 1; j <= n; j++)
    {
      if (ara[i]==ara[j])
      {
        continue;
      }
      
      printf("%d", ara[j]);
    }
    printf("\n");
  }

  return 0;
}