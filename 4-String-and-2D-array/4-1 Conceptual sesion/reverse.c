#include <stdio.h>
#include <string.h>
int main()
{
  //Reverse strin
    char ch[100];
  scanf("%s",&ch);
  int i=0,len=0;
  while (ch[i]!=NULL)
  {
    i++;
    len++;
  }

  i=0;
  for ( i = len-1; i>=0; i--)
  {
   printf("%c",ch[i]);
  }
  
  
  return 0;
}