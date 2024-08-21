#include <stdio.h>
void func()
{
  char ch[100];
  scanf("%s", ch);
  int n = 26;
  int freq[n + 1];
  for (int i = 1; i <= n; i++)
    freq[i] = 0;

  for (int i = 0; ch[i] != NULL; i++)
  {
    freq[(ch[i] - 'a') + 1]++;
  }

  int count;
  for (int i = 1; i <= n; i++)
  {
    if (freq[i] >= 1)
    {
      count = freq[i];
      for (int j = 1; j <= count; j++)
      {
        printf("%c", (i + 'a') - 1);
      }
    }
  }

  for (int i = n; i >= 1; i--)
  {
    if (freq[i] >= 1)
    {
      count = freq[i];
      for (int j = 1; j <= count; j++)
      {
        printf("%c", (i + 'a') - 1);
      }
    }
  }
}

int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    func();
    printf("\n");
  }
}