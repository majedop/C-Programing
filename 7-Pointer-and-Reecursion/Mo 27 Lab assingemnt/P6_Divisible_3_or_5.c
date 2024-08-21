#include <stdio.h>
int divisible_3(int *ptr)
{
  if (*ptr % 3 == 0)
    return 3;
}
int divisible_by_5(int *ptr)
{
  if (*ptr % 5 == 0)
    return 5;
}
int main()
{
  int n, count = 0;
  scanf("%d", &n);
  int arr[n + 1];
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  int *a = &arr;
  for (int i = 0; i < n; i++)
  {
    if (divisible_3(a) == 3 || divisible_by_5(a) == 5)
      count++;

    a++;
  }
  if (count >= 1)
    printf("%d", count);
  else
    printf("-1");

  return 0;
}