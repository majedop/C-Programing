#include <stdio.h>
#include <string.h>
void func(char ch[])
{
  int freq[27];
  int len = strlen(ch);
  for (int i = 1; i <= 26; i++)
    freq[i] = 0;

  for (int i = 0; i < len; i++)
    freq[(ch[i] - 'a') + 1]++;

  char s[100];
  for (int i = 26; i >= 1; i--)
  {
    if (freq[i] >= 1)
    {
      for (int j = 0; j < freq[i]; j++)
      {
        printf("%c", i + 96);
      }
    }
  }
}
int main()
{
  char ch[100];
  scanf("%s", ch);
  func(ch);

  return 0;
}