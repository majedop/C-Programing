#include <stdio.h>
int per(int n,int r);
int fact(int n);
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  int ans=per(a,b);
  printf("%d",ans);
}
//function
int per(int n,int r)
{
  int p=fact(n)/fact(n-r);
  return p;
}
int fact(int n)
{
  int i,mul=1;
  for ( i = 1; i <=n; i++)
    mul*=i;

    return mul;
}