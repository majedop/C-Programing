#include <stdio.h>
int Factorial(int n)
{
  if(n>0)
  return n*Factorial(n-1);
  else
  return 1;
}
int main()
{
  int n;
  scanf("%d",&n);
  int ans=Factorial(n);
  printf("Factorial = %d\n",ans);
}