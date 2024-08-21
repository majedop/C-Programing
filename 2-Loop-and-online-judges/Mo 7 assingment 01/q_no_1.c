#include <stdio.h>

int main()
{
  //Theory Exam q 1;
  int a = 5, b = 13;

  int sawp;
  sawp = a;
  a = b;
  b = sawp;

  printf("%d and %d", a, b);

  return 0;
}