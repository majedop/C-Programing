#include <stdio.h>
//22315=13 id farhan numbers
int sum_of_digit(int n)
{
  int summ=0;
  for (int i = n; i>0; i--)
  {
    summ+=n%10;
    n=n/10;
  }
  return summ;
}
int is_prime(int sum)
{
  for (int i = 2; i <sum; i++)
  {
    if(sum%i==0)
    return 0;
  }
  return 1;
  
}
int main()
{
  int n;
  scanf("%d",&n);;
  if(is_prime(sum_of_digit(n))==1)
  printf("Fahran numbers");
  else
  printf("NO");
}