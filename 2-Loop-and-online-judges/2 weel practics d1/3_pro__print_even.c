#include <stdio.h>

int main()
{
  // one positive integer N as input and print all even numbers from 1 to N.
  int n;
  scanf("%d", &n);

  int i;
  for (i = 2; i <= n; i += 2)
  {
    printf("%d ", i);
  }
  return 0;
}