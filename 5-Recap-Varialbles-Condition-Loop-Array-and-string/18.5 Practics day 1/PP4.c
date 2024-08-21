#include <stdio.h>
int main()
{
  char ch[50];
  scanf("%s",&ch);
  int i;
  for(i=0; ch[i]!=NULL; i++)
  {
    if(ch[i]==ch[i+1])
    {
      continue;
    }
      printf("%c",ch[i]);
  }

  return 0;
}