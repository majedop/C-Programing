#include <stdio.h>
int main()
{

  // array of size N as input and tell if the sum of odd values is even or not.
// If the sum of odd values is even print YES otherwise NO.

 int n, sum=0;
 scanf("%d",&n);
 int a[n];
 int i;

 for ( i = 0; i < n; i++)
 {
  scanf("%d",&a[i]);
 }

 for ( i = 0; i < n; i++)
 {
  if (a[i]%2==1)
      sum+=a[i]; 
 }
  
  if (sum%2==0)
    printf("Yes");

  else
  printf("No");
  

  return 0;
}