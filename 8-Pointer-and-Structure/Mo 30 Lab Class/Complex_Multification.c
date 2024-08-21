#include <stdio.h>
struct comp
{
  float real;
  float img;
};
struct comp comp_multi(struct comp x, struct comp y)
{
 struct comp s;
 s.real = (x.real*y.real)-(x.img*y.img);
 s.img= (x.real*y.img)+(y.real*x.img);
 return s;
}
void print_comp(struct comp s)
{
  printf("%.2f %.2f",s.real,s.img);
}
int main()
{
  struct comp c1={5.9, 3.1};
  struct comp c2={-2.5, 3.7};
  print_comp(comp_multi(c1,c2));

  return 0;
}