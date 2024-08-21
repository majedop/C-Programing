#include <stdio.h>

int main()
{
  //print how much digits in input 

 long long int n,i;
 scanf("%lld",&n);

 for(i=0; n>0; i++)
 { 
  n=n/10;
 }
 printf("%d",i);
 return 0;
}

