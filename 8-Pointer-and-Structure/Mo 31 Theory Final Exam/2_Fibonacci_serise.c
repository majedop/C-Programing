#include <stdio.h>
int main()
{
  int n, pre = 0, next = 1, temp = 0;
  scanf("%d", &n);

  printf("%d, %d, ", pre, next);
  for (int i = 1; i <= n - 2; i++)
  {
    temp = pre + next;
    pre = next;
    next = temp;
    if (i == (n - 2))
      printf("%d ", temp);
    else
      printf("%d, ", temp);
  }
  return 0;
}