#include <stdio.h>
#include <string.h>

char result[500];
void func(char ch[])
{
  strcat(result,ch);
  strcat(result," ");
}
int main()
{
  int m;
  scanf("%d",&m);
  while (m--)
  {
    char ch[50];
    scanf("%s",ch);
    func(ch);
  }
  printf("%s",result);
  
}