#include <stdio.h>
int func(int a)
{
return 1;
}
int main()
{
  int a;
  int ans=func(a);
}

#include <stdio.h>
int func(int a)
{
}
int main()
{
  int a;
  func(a);
}

#include <stdio.h>
void func(int a)
{
}
int main()
{
  int a;
  func(a);
}

#include <stdio.h>
void func()
{
}
int main()
{
  func();
}