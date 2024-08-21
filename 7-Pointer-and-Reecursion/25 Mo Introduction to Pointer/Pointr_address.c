#include <stdio.h>
int main()
{
  int a;
  int* p;
  int* q;
  p=&a;
  q=p;
  printf("%p",q);
}