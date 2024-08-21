#include <stdio.h>
#include <string.h>
int main()
{
int n,i,j;
scanf("%d",&n);
char ch[100],index=0;
for ( i = 0; i < n; i++)
{
  char str[100];
  scanf("%s",str);
  for(j=0; str[j]!=NULL; j++)
  {
    ch[index]=str[j];
    index++;
  }
  ch[index]=' ';
  index++;
}
printf("%s",ch);

  return 0;
}