#include <stdio.h>
int main()
{
  int t,j;
  scanf("%d",&t);
  for(j=0; j<t; j++)
  {
    int n;
  scanf("%d",&n);
  int i; 
  char s[1000];
  scanf("%s",s);
  int one_zero=0,zero_one=0;
  for(i=0; i<n; i+=1)
  {
    if(s[i]=='1')
    {
      if(s[i+1]=='0')
      one_zero++;
    }
    else if(s[i]=='0')
    {
      if(s[i+1]=='1')
      zero_one++;
    }
  }
  printf("%d\n",one_zero+zero_one);
  }

  return 0;
}