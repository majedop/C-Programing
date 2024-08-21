#include <stdio.h>
float average(float *p, float *q)
{
  return (*p+*q)/2;
}
int main()
{
  float a,b;
  scanf("%f %f",&a,&b);
  float ans= average(&a,&b);
  printf("%f",ans);

}