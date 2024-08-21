#include <stdio.h>

int main()
{
  //LCM
int a,b,rem;
scanf("%d %d",&a,&b);
printf("The LCM of %d and %d is ",a,b);

int num1, num2,s;
num1=a;
num2=b;

while (num2!=0)
{
  rem=num1%num2;
  num1=num2;
  num2=rem;

 s=(a*b)/num1;
}
printf("%d.",s);

  return 0;
}