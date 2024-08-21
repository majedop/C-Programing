#include <stdio.h>
float circel_aria(float r)
{
  return 3.1416*r*r;
}
int main()
{
  float r;
  scanf("%f",&r);
  float ans= circel_aria(r);
  printf("%f",ans);
}