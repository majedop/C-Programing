#include <stdio.h>
int my_max(int a,int b, int c);//Function Phototype

 int main()
 {
  int i;
  for ( i = 0; i < 7; i++)
  {
   int x,y,z,ans=0;
  scanf("%d %d %d",&x,&y,&z);
  ans=my_max(x,y,z);
  printf("Maximam value is: %d\n",ans);
  }
  return 0;
 }
  int my_max(int a,int b, int c)
 {
  if(a>b && a>c)
  return a;
  else if(b>c)
  return b;
  else
  return c;
 }