#include <stdio.h>
#include <string.h>
int main()
{
  char ch[102];
  scanf("%s",ch);
  int len=strlen(ch);
  int i;
  for(i=0;i<len; i++)
  {
    if(ch[i]>='A' && ch[i]<='Z')
    ch[i]+=32;

    if(ch[i]=='a' || ch[i]=='e'|| ch[i]=='i' || ch[i]=='o' || ch[i]=='u')
    continue;

    printf(".%c",ch[i]);
  }
  return 0;
}