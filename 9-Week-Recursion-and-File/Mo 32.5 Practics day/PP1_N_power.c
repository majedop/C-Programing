#include <stdio.h>
int solve(int a, int b)
{
  if (b == 0)
    return 1;
  int s = solve(a, b - 1);
  return s * a;
}
int main()
{
  int n, m;
  scanf("%d %d", &n, &m);
  int ans = solve(n, m);
  printf("%d", ans);

  return 0;
}