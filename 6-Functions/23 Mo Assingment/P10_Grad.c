#include <stdio.h>
char func(int x)
{
  if(x>=80 && x<=100)
  return 'A';
  else if(x>=60 && x<=79)
  return 'B';
  else if(x>=40 && x<=59)
  return 'C';
  else
  return 'F';
}
int main()
{
  int n;
  scanf("%d",&n);
  char ans=func(n);
  printf("%c",ans);
}