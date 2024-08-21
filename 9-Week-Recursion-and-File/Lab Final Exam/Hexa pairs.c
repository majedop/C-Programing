#include <stdio.h>
int get_gcd(int n1, int n2)
{
  if (n2 != 0)
    return get_gcd(n2, n1 % n2);
  else
    return n1;
}

int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {

    int n, i, j, count = 0;
    scanf("%d", &n);
    int arr[n + 1];
    for (i = 0; i < n; i++)
      scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
      {
        if (i != j && (get_gcd(arr[i], arr[j])) == 1)
          count++;
      }
    }
    printf("%d\n", count);
  }

  return 0;
}