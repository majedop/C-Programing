#include <stdio.h>
#include <string.h>
int main()
{
  char s1[]="aajedul";
  char s2[]="majedul";
    int ff=strcasecmp(s1,s2);
    printf("%d",ff);
    return 0;
}