#include <stdio.h>
int add_three_nums(int a, int b, int c)
{
	return a+b+c;
}
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  int ans=add_three_nums(a,b,0);
  printf("%d",ans);
return 0;
}