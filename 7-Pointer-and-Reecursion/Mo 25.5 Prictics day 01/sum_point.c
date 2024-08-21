#include <stdio.h>
int main()
{
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  int* p, *q, *z;
  p=&a;
  q=&b;
  z=&c;
   int ans=*p+*q+*z;
   printf("%d",ans);
  
}