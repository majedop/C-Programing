#include <stdio.h>

int get_sum(int x,int y)
{
  int sum=x+y;
  return sum;

}
int main()
{
int result= get_sum(50,100);
printf("%d\n",result);
int ans=get_sum(100,500);
printf("%d",ans);
}