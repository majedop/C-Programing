#include <stdio.h>
int func(char ch[])
{
  int count=0;
  for (int i = 0; ch[i]!=NULL; i++)
  {
    count+=ch[i]-('a')+1;
  }
  return count;
}
int check_power(int count)
{
  
  for (int i = 1; i < count/2; i++)
  {
    int pow=1;
    for (int j = 1; j<=i; j++)
    {
      pow*=2;
    }
    if(pow==count)
    {
     return i;
    }
  }
  return 0;
  
}
int main()
{
  char ch[100];
  scanf("%s",ch);
  int count=func(ch);
  int ans=check_power(count);
  if(ans>=1)
   {
    printf("Yes\n");
    printf("Cost= 2^%d",ans);
   }
   else
   printf("No");

}