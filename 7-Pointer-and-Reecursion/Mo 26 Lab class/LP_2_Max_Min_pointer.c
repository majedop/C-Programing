#include <stdio.h>
int find_max_min(int ara[], int size, int* p, int* q)
{
  *p=ara[0];
  *q=ara[0];
  for (int i = 0; i < size; i++)
  {
    if(ara[i]>*p)
    *p=ara[i];
    if(ara[i]<*q)
    *q=ara[i];
  }

}
int main()
{
  int n;
  scanf("%d",&n);
  int ara[n];
  for (int i = 0; i < n; i++)
  scanf("%d",&ara[i]);

  int maxx,minn;
  find_max_min(ara, n, &maxx, &minn);
  printf("Max= %d\n", maxx);
  printf("Min= %d", minn);
}