#include <stdio.h>
int main()
{
  int i,sum=0;
  for(i=0; i<=100; i+=7)
    sum+=i;

    printf("%d",sum);
  return 0;
}