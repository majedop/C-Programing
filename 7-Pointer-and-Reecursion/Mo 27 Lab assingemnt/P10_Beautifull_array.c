#include <stdio.h>
int half(int n)
{
  if (n % 2 != 0)
    return (n / 2) + 1;
  else
    return n / 2;
}

int find_seven(int *ad)
{
  int s = 0;
  while (*ad > 0)
  {
    s = *ad % 10;
    *ad /= 10;

    if (s == 7)
      return 1;
  }
}
int main()
{
  int n;
  scanf("%d", &n);
  int ara[n + 1];
  for (int i = 0; i < n; i++)
    scanf("%d", &ara[i]);

  int h, count = 0;
  h = half(n);
  int *ad = &ara;
  for (int i = 0; i < n; i++)
  {
    if (find_seven(ad) == 1)
      count++;
    ad++;
  }
  if (count >= h)
    printf("Beautiful");
  else
    printf("Ugly");

  return 0;
}