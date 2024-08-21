#include <stdio.h>
int is_prime(int x)
{
  for (int i = 0; i < x; i++)
  {
    if(x%2==0)
    return 0;
  }
  return 1;
}
int main()
{
  int n;
  scanf("%d",&n);
  if(is_prime(n)==1)
  printf("Number is prime");
  else
  printf("Not Prime");

  return 0;
}