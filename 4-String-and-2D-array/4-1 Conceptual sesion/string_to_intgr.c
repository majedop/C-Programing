#include <stdio.h>
int main()
{
 char ch[]="abcdefghijklmnopqrstuvwxyz";
 int i=0,value=0;
 while (ch[i]!=NULL)
 {
  value=(ch[i]-'a')+1;
 printf("%c>> %d\n",ch[i],value);
 i++;
 }
 

  return 0;
}