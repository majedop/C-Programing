#include <stdio.h>
void func()
{
  int C,D;

  scanf("%d",&C);
  int i=0;
  while (C>0)
  {
    char ch;
    D=C%10;
    C/=10;
    ch=('A'+D)-1;
    i++;
    printf("%c",ch);
  }
  printf("\n");
  
  

}
int main()
{
  int t;
  scanf("%d",&t);
  while (t--)
  {
    func();
  }
  
  return 0;

}