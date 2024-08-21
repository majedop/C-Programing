#include <stdio.h>
int main()
{
  int t,i,ans=0;
  scanf("%d",&t);
  int ara[t];
  char a;

  for ( i = 1; i <=t; i++)
    scanf("%d%c",&ara[i],&a);
  
  for ( i = 1; i <=t; i++)
  {
   if(ara[i]<60)
    ans=(60-ara[i])+40+60;
   
   else if(ara[i]<80)
    ans=(80-ara[i])*2+60;

   else if(ara[i]<=100)
    ans=(100-ara[i])*3;

    printf("%d minutes\n",ans);
  }
  
  return 0;
}