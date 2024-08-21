#include <stdio.h>

int main()
{
  // two positive integers N and M as input and print all numbers from 1 to N that are divisiblby M.

  int n, m;
  scanf("%d %d", &n, &m);

  int i = 0;
  while (i <= n)
  {
    i++;
    if (i % m == 0)
    {
      printf("%d ", i);
    }
  }

  return 0;
}