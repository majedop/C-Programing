#include <stdio.h>
int s=50;
void add_two_number()
{
  int a,b,s=30;
  scanf("%d%d",&a,&b);
  int ans=a+b;
  printf("Sum %d\n",ans);
  printf("Local Function %d\n",s);
}
int main()
{
  add_two_number();
  printf("Global Main %d\n",s);
  return 0;
}