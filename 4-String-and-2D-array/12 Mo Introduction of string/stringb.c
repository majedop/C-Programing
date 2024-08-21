#include <stdio.h>
int main()
{
  char ch[100];
  scanf("%s",&ch);
  int i=0;
  while (ch[i]!=NULL)
  {
   printf("%c ",ch[i]);
   i++;
  }
  

  return 0;
}