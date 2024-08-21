#include <stdio.h>
int solve(int* ptr, int n)
{
  if(n==0) return 0;
  int s= solve(ptr+1,n-1);
  return s+(*ptr%10);
}
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n];
   for (int i = 0; i < n; i++)
   {
    scanf("%d",&arr[i]);
   }
   
   int ans= solve(&arr,n);
   printf("%d",ans);
   
}