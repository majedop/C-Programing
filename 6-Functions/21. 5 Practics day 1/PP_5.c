#include <stdio.h>
//Function
float fact(char ch, int x,int y)
{
  int s;
  if(ch=='+')
  {
    int s=x+y;
    return s;
  }
  else if(ch=='-')
  {
    if(x>y)
    s=x-y;
    else
    s=y-x;
    return s;
  }
  else if(ch=='/')
  {
    if(x>y)
    s=x/y;
    else
    s=y/x;
    return s;
  }
  else
  {
    s=x*y;
    return s;
  }
}

int main()
{
  char ch;
  scanf("%c",&ch);
  int a,b;
  scanf("%d %d",&a,&b);
  float ans=fact(ch,a,b);
  printf("%f",ans);
}
