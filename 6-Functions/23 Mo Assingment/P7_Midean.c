#include <stdio.h>
int median(int array[],int size)
{
  int m;
  if(size%2!=0)
 {
   m=size/2;
   return array[m+1];
 }
 else
 if(size%2==0)
 {
  m=size/2;
  return (array[m]+array[m+1])/2;
 }
}
int main()
{
  int n;
  scanf("%d",&n);
  int array[n+1];
  for (int i = 1; i <=n; i++)
    scanf("%d",&array[i]); //14
  int ans= median(array,n);//3 5 7 12 13 14 21 23 23 23 23 29 40 56
  printf("%d",ans);

  return 0;
}