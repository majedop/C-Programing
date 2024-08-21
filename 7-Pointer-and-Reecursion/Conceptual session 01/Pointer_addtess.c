#include <stdio.h>
int main()
{
  int a=1002;
  int* b;
  b=&a;
  *b=5000;
  printf("Value = %d, Addreess= %d", a,*b);
}