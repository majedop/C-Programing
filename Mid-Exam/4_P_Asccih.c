#include <stdio.h>
int main()
{
	char a[10];
	a[0] = 98;
	a[1] = 97;
	a[2] = 'n';
	a[3] = 'a';
	a[4] = 'n';
	a[5] = 'a';
	a[6] = '\0';
  
  int i;
  for ( i = 0; a[i]!=NULL; i++)
  {
    printf("%c",a[i]);
  }
  // jehetu array ta char type tai second and Third statement ar digit gulo tader ASCII value tey porinoto hobe
  // b ar ASCII value = 98 and a ar =97
  // tai print hebe== bananna


  return 0;
}