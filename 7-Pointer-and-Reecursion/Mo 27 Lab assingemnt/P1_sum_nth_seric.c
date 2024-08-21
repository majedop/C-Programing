#include <stdio.h>
#include "stdbool.h"
int main()
{
  int n, sum = 0;
  scanf("%d", &n);
  bool flag = true;

  for (int i = 1; i <= n; i++)
  {
    if (flag)
      sum += i;
    else
      sum -= i;

    if (i % 3 == 0 && i % 2 == 0)
      flag = true;
    if (i % 3 == 0 && i % 2 != 0)
      flag = false;
  }
  printf("%d", sum);

  return 0;
}