#include <stdio.h>
int main()
{
  int hour,minute;
  scanf("%d %d",&hour,&minute);

  int sum= (hour*60)+minute;
  printf("%d",sum);

}