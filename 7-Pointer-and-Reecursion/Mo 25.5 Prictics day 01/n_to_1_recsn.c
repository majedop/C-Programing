#include <stdio.h>
void func(int n)
{
  if(n>0)
  {
    printf("%d ",n);
    func(n-1);
  }
}
int main()
{
  int n;
  scanf("%d",&n);
  func(n);
}