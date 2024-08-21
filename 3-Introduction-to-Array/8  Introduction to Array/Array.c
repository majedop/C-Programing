#include <stdio.h>

int main()
{
  int x[7];
x[0]=1500;
x[1]=2000;
x[2]=200;
x[3]=x[1]-x[0];

printf("%d \n",x[3]);
printf("%d",x[1]);

  return 0;
}