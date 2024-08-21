#include <stdio.h>

int retn(int x)
{
  
  return 10*x;
}
int main()
{
  int a=retn(5);
  printf("%d\n",a);
   a=retn(10);
  printf("%d\n",a);
   a=retn(15);
  printf("%d",a);
  return 0;
}
