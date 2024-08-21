#include <stdio.h>
void pass_value(int x, int y)
{
  int temp;
  temp = x;
  x = y;
  y = temp;
}
void pass_references(int *p, int *q)
{
  int temp = *p;
  *p = *q;
  *q = temp;
}
int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  printf("Befor swap a= %d, b= %d\n\n", a, b);
  pass_value(a, b);
  printf("Pass value after swap= %d, %d\n", a, b);
  pass_references(&a, &b);
  printf("Pass References after swap = %d, %d", a, b);

  return 0;
}