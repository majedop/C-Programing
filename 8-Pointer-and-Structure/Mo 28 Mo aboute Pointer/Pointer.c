#include <stdio.h>
void func(int* p)
{
  *p=200;
}
int main()
{
  int n=50;
  func(&n);
  printf("%d",n);
}