#include <stdio.h>
void func(int x)
{
  int sum;
  if(x>0)
  { 
    func(x-1);
    printf("%d ",x);
  }
}

int main()
{
  int n;
  scanf("%d",&n);
  func(n);
  printf("Majed");
}