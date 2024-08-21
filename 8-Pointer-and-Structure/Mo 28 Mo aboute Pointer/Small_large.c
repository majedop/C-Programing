#include <stdio.h>
void func(int a,int b,int* p, int *q)
{
  *p=a>b?a:b;
  *q=a<b?a:b;
}
int main()
{
  int a=50, b=100;
  printf("a=%d, b=%d\n",a,b);
  func(a,b,&a,&b);
  printf("a=%d, b=%d",a,b);
  
}