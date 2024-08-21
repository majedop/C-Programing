#include <stdio.h>
int the_gcd(int x,int y)
{
 int i;
 for(i=x; i>=1; i--)
 {
  int and=0;
  if(x%i==0 && y%i==0)
 {
   and=(x*y)/i;
   return and;
 }
}
}
int main()
{
  int a,b;
  scanf("%d%d",&a,&b);
  int ans=the_gcd(a,b);
  printf("%d",ans);
  
  return 0;
}