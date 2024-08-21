#include <stdio.h>
void swap(int arr[], int *p, int *q)
{
  int temp = arr[*p];
  arr[*p] = arr[*q];
  arr[*q] = temp;
}
int main()
{
  int n, q, L, R;
  scanf("%d", &n);
  int arr[n + 1];
  for (int i = 1; i <= n; i++)
    scanf("%d", &arr[i]);

  scanf("%d", &q);
  for (int i = 1; i <= q; i++)
  {
    scanf("%d %d", &L, &R);
    swap(arr, &L, &R);
  }

    printf("\n");
  for (int i = 1; i <= n; i++)
    printf("%d ", arr[i]);

  return 0;
}