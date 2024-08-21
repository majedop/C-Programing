#include <stdio.h>
void pattern(int n)
{
  int i, j;
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n - i; j++)
    {
      printf(" ");
    }

    for (j = 1; j <= (2 * i - 1); j++)
    {
      if (i % 2 == 0)
        printf("*");
      else
        printf("^");
    }
    printf("\n");
  }
}
int main()
{
  int n;
  scanf("%d", &n);
  pattern(n);

  return 0;
}