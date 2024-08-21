#include <stdio.h>
int add_them(int ara[], int size)
{
  int summ=0;
  for (int i = 0; i < size; i++)
  {
    summ+=ara[i];
  }
  return summ;
}
int main()
{
  int n;
  scanf("%d",&n);
  int ara[n];
  for (int i = 0; i < n; i++)
   scanf("%d",&ara[i]);

   int ans=add_them(ara,n);
   printf("Sum %d",ans);
  
  return 0;
}