#include <stdio.h>
int main()
{
  int a,b=20;
  int* p;
  p=&a;
  printf("%p\n",p);
  int* s;
  s=&b;
  printf("%d",*s);

  return 0;
}