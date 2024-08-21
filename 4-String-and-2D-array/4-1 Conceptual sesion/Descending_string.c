#include <stdio.h>
#include <string.h>
int main()
{
  char str[]="bbbbaccddd";
  int len=strlen(str);
  int i,largest=26;
  int fre[largest+1];
  for ( i = 0; i <=largest; i++)
  {
    fre[i]=0;
  }
  
  for ( i = 0; i < len; i++)
  {
    fre[(str[i]-'a')+1]+=1;
  }
  
  for ( i = 1; i <=largest; i++)
  {
   printf("%d ",fre[i]);
  }

  return 0;
}