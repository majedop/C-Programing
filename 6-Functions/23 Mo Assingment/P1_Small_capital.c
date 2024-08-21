#include <stdio.h>
int main()
{
  char s[50];
  scanf("%s",s);
  for (int i = 0; s[i]!=NULL; i++)
  {
    if(s[i]>='A' && s[i]<='Z')
    s[i]+=32;
    else
    s[i]-=32;
  }
  printf("%s",s);
  
  return 0;
}