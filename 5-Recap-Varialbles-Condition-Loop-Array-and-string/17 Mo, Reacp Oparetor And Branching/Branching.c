#include <stdio.h>
int main()
{
  int a,b,ans=0;
  scanf("%d %d",&a,&b);
  char ch;
  getchar();
  ch= getchar();
  if(ch=='+')
{
  ans=a+b;
  printf("Ans= %d",ans);
}
else if(ch=='-')
{
  ans=a-b;
  printf("Ans= %d",ans);
}
else
printf("Invaled Input.");

  return 0;
}