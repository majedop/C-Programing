#include <stdio.h>
#include <string.h>
int main()
{
  char ch[100];
  scanf("%s",ch);
  int i;
  for(i=0; i<strlen(ch); i++)
  {
    if(ch[i]>='A' && ch[i]<='Z')
    ch[i]+=32;
  }
  int flag=1;
  for ( i = 0; i <strlen(ch); i++)
  {
    if(ch[i]>='a' && ch[i]<='z')
    {
      flag=0;
      break;
    }
   else if(ch[i]>='2' && ch[i]<='9')
    {
      flag=0;
      break;
    }
  }
  if (flag==1)
  {
    printf("Yas");
  }
  else
  printf("NO");
  

  return 0;
}