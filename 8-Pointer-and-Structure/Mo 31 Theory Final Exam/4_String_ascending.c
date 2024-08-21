#include <stdio.h>
void ascending(char ch[])
{
  int n = 26;
  int freq[n + 1];
  for (int i = 1; i <= n; i++)
    freq[i] = 0;

  for (int i = 0; ch[i] != NULL; i++)
    freq[(ch[i] - 'a') + 1]++;

  for (int i = 1; i <= n; i++)
  {
    if (freq[i] >= 1)
      while (freq[i]--)
        printf("%c", ((i + 'a') - 1));
  }
}
int main()
{
  char ch[100];
  scanf("%s", ch);
  ascending(ch);

  return 0;
}