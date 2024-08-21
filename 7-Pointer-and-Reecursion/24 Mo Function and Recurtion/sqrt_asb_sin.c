#include  <stdio.h>
#include <math.h>
int main()
{
  int n;
  scanf("%d",&n);
  int ans=abs(n);
  printf("Absulute: %d\n",ans);
  
  float a=sqrt(n);
  printf("Root are: %f\n",a);

  a=sin(3.14159/2);
  printf("Sin90 %f\n",a);

  a=cos(3.14159/3);
  printf("Cos90 = %f\n",a);
}