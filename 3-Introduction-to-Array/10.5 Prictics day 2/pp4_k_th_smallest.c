#include <stdio.h>
int main()
{
  // size N . And next line will contain k.
  // Now find the k-th smallest element from the array.

  int n,k, temp=0;
  scanf("%d",&n);
  int a[n];
  int i,j;

  for ( i = 1; i <=n; i++)
  {
    scanf("%d",&a[i]);
  }
  scanf("%d",&k);

  for (i = 1; i <=n; i++)
  {
    for ( j =i+1; i <=n; i++)
    {
      if (a[i]>a[j]);
      {
        temp=a[i];
        a[i]= a[j];
        a[j]=temp;
      }}}
   
   printf("%d",a[k]);
  
return 0;
}