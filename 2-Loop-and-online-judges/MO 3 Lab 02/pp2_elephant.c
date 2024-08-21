#include <stdio.h>

int main()
{
  //A. Elephant codeporces.
  int x;
  scanf("%d", &x);

  int s, s2;
  s = x / 5;
  s2 = (x / 5) + 1;
 
  if (x % 5 == 0)
  {
    printf("%d", s);
  }
  else
  {
    printf("%d", s2);
  }

  return 0;
}