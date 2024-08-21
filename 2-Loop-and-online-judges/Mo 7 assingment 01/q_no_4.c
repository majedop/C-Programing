#include <stdio.h>
int main()
{

 long long int n, temp, sum, remainder;

  scanf("%lld", &n);

  temp = n;
  sum=0;
  while (temp != 0)
  {
    remainder = temp % 10;
    sum = sum + remainder;
    temp = temp / 10;
  }
  printf("%lld", sum);

  return 0;
}