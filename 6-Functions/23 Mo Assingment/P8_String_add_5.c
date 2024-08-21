#include <stdio.h>
int main()
{
  char ch[100];
  int n;
  scanf("%s ", ch);
  scanf("%d", &n);
  for (int i = 0; ch[i] != NULL; i++)
  {
    if (ch[i] >= 'a' && ch[i] <= 'z')
      ch[i] += n;
    if (ch[i] > 'z')
      ch[i] -= 26;
  }
  printf("%s", ch);
  
  return 0;
}