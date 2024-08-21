#include <stdio.h>
#include <string.h>
int main()
{
  //String Concatenation
char s1[50]="Kazi ";
char s2[20]="Majedul Islam";

int len=strlen(s1),i=0;
for ( i = 0; s2[i]!=NULL; i++)
  s1[len+i]+=s2[i];

printf("%s",s1);

  return 0;
}