#include <stdio.h>

int main()
{
  // take one positive integer N as input and print all divisors of N.
  int n;
  scanf("%d", &n);

  int i = 0;
  while (i <= n)
  {
    i++;
    if (n % i == 0)
      printf("%d ", i);
  }

  return 0;
}