#include <stdio.h>
struct comp
{
  float real;
  float img;
};
struct comp complex_add(struct comp x, struct comp y)
{
  struct comp a;
  a.real= x.real+y.real;
  a.img= x.img+y.img;
  return a;
};
int main()
{
  struct comp c1= {5.9, 3.1};
  struct comp c2={-2.5, 3.7};
  struct comp ans= complex_add(c1,c2);
  printf("%.1f %.2fi",ans.real,ans.img);

  return 0;
}