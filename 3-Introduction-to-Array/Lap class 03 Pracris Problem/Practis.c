#include <stdio.h>
int main()
{
  int n, position, i;
  scanf("%d", &n);

  int ara[n];

  for (i = 1; i <= n; i++)
  {
    scanf("%d", &ara[i]);
  }

  int even, odd;
  even = 0;
  odd = 0;

  for (i = 1; i <= n; i++)
  {
    if (ara[i] % 2 == 0)
      even++;
    else
      odd++;
  }

  if (even == 1)
  {
    // position cheek korbo
    for (i = 1; i <= n; i++)
    {
      if (ara[i] % 2 == 0)
        position = i;
    }
  }
  else
  {
    for (i = 1; i <= n; i++)
    {
      if (ara[i] % 2 != 0)
        position = i;
    }
  }
  printf("%d", position);

  return 0;
}