#include <stdio.h>
void prime_numbers()
{
  int l, m;
  scanf("%d %d", &l, &m);
  int i;
  for (i = l; i <= m; i++)
  {
    int flag = 1;
    for (int j = 2; j < i; j++)
    {
      if ((i % j == 0) &&( i != j))
      {
        flag = 0;
        break;
      }
    }
    if (flag == 1)
      printf("%d ", i);
  }
  printf("\n");
}
int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    prime_numbers();
  }

  return 0;
}