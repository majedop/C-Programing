#include <stdio.h>
int main()
{
 char s[20];
 scanf("%s",&s);
 int a,b,sum=0;
 scanf("%d %d",&a,&b);
 int i;
 for(i=0; s[i]!=NULL; i++)
 {
  if(s[i]=='+')
  sum+=a+b;
  else if(s[i]=='*')
  sum+=a*b;
 }
 printf("%d",sum);
   return 0;
}