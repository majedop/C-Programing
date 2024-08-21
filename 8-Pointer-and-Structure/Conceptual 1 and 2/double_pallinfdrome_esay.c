#include <stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while (t--)
  {
    char ch[100];
    scanf("%s",ch);
    printf("%s",ch);
    printf("%s",strrev(ch));
    printf("\n");
  }
  return 0;
}