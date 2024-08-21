#include <stdio.h>
void even_uppercase(char ch[])
{
  for (int i = 0; ch[i]!=NULL; i++)
  {
    if(ch[i]%2==0)
    ch[i]-=32;
  }
  printf("%s",ch);  
}
int main()
{
  char ch[100];
  scanf("%s",ch);
  even_uppercase(ch);

}