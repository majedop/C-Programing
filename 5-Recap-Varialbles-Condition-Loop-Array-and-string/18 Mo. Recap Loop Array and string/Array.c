#include <stdio.h>
int main()
{
  int i;
  int ara[6]={0,0,0,0,0,0};
  ara[5]=25;
  ara[2]=50;
  ara[2]+=55;
  ara[3]=ara[5]+ara[2];
  scanf("%d",&ara[0]);

  for ( i = 0; i <6; i++)
  {
    printf("%d ",ara[i]);
  }
  

  return 0;
}