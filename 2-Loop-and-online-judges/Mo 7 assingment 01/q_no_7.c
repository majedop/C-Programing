#include <stdio.h>

int main()
{
  //GCD
int a,b,rem;
scanf("%d %d",&a, &b);
printf("The GCD of %d and %d is ",a,b);
while (b!=0)
{
  rem=a%b;
  a=b;
  b=rem;
}
printf("%d.",a);

  return 0;
}