#include <stdio.h>
#include <string.h>
int main()
{
 char s1[102];
 char s2[102];
 fgets(s1,sizeof(s1),stdin);
 fgets(s2,sizeof(s2),stdin);
 int len=strlen(s1);
 int i;
 for(i=0; i<len; i++)
 {
  if(s1[i]>='A' && s1[i]<='Z')
  s1[i]+=32;

  if(s2[i]>='A' && s2[i]<='Z')
  s2[i]+=32;
 }
 for ( i = 0; i < len; i++)
 {
  if(s1[i]<s2[i])
  {
    printf("-1");
    return 0;
  }
  else if(s1[i]>s2[i])
  {
    printf("1");
    return 0;
  }
 }
 printf("0");
   return 0;
}