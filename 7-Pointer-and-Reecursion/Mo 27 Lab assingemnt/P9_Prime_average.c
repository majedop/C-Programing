#include <stdio.h>
int is_prime(int *ptr)
{
  for (int i = 2; i < *ptr; i++)
  {
    if (*ptr % i == 0)
      return 0;
    return 1;
  }
}
float find_average(int *ptr, int size)
{
  int sum = 0, count = 0;
  for (int i = 0; i < size; i++)
  {
    if (*ptr % 2 == 0)
    {
      sum += *ptr;
      count++;
    }
    ptr++;
  }
  return sum / count;
}
int main()
{
  int n, count = 0;
  scanf("%d", &n);
  int arr[n + 1];
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  int *ar = &arr;
  for (int i = 0; i < n; i++)
  {
    if (is_prime(ar) == 1)
      count++;
    ar++;
  }
  printf("Prime numbers: %d\n", count);

  ar = &arr;
  float ans = find_average(ar, n);
  printf("Average of all even integers: %f\n", ans);

  return 0;
}