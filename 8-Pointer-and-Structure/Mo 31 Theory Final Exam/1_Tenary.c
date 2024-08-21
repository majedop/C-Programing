#include <stdio.h>
int main()
{
  int a, b, ans = 0;
  scanf("%d %d", &a, &b);

  ans = a > b ? a : b;
  printf("Maximum number is= %d", ans);
  return 0;
}