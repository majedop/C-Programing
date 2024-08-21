#include <stdio.h>
int even_even_odd_odd(int arr[], int size)
{
  int sum = 0;
  for (int i = 1; i <= size; i++)
  {
    if (arr[i] % 2 == 0 && i % 2 == 0)
      sum += arr[i] + i;
    if (arr[i] % 2 != 0 && i % 2 != 0)
      sum += arr[i] + i;
  }
  if(sum==0)
  return 0;

  return sum;
}
int main()
{
  // 8          =20
  // 12 6 1 3 4 2 2 3
  int n;
  scanf("%d", &n);
  int arr[n + 1];
  for (int i = 1; i <= n; i++)
    scanf("%d", &arr[i]);

  int ans = even_even_odd_odd(arr, n);
  printf("%d", ans);

  return 0;
}