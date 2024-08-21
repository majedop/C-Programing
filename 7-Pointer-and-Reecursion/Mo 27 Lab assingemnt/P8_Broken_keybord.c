#include <stdio.h>
void func(char ch[])
{
  for (int i = 0; ch[i] != NULL; i++)
  {
    if (i % 2 != 0)
      printf("%c%c", ch[i], ch[i]);
    else
      printf("%c", ch[i]);
  }
}

int main()
{
  char ch[100];
  scanf("%s", ch);
  func(ch);

  return 0;
}