#include <stdio.h>
#include <string.h>
int main()
{
  int t,j;
  scanf("%d",&t);
  for(j=0; j<t; j++)
  {
    char ch[21];
  char ch2[21];
  scanf("%s",ch);
  int i,r=0,len=strlen(ch);
  int flag=1;
  for(i=len-1; i>=0; i--)
  {
    ch2[r]=ch[i];
    r++;
  }
  for(i=0; i<len; i++)
  {
    if(ch[i]!=ch2[i])
    flag=0;
  }
  if(flag==1)
  {
    if(len>7)
    printf("Case #2: %c%d%c\n",ch[0],len-2,ch[len-1]);
    else
    printf("Case #3: %s\n",ch);
  }
  else
  printf("Case #1: Not Palindrome\n");
  }

return 0;
}