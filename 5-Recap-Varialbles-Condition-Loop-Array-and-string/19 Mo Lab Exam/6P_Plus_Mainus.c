#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  char ch[101];
  scanf("%s",ch);
  int i,count=1,max=0;
  for(i=0; i<n-1; i++)
  {
    if(ch[i]==ch[i+1])
    count++;
    else
    count=1;
    if(count>max)
    max=count;
  }
  printf("%d",max);
}