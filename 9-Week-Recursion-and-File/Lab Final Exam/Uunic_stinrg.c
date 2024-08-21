#include <stdio.h>
int main()
{

  int n;
  scanf("%d", &n);
  int freq[27];
  for (int i = 1; i <= 26; i++)
    freq[i] = 0;

  char ch;
  for (int i = 1; i <= n; i++)
  {
    scanf("%c", &ch);
    freq[(ch - 'a') + 1]++;
  }
  int count = 0;
  for (int i = 1; i <= 26; i++)
  {
    if (freq[i] == 1)
      count++;
  }
  printf("%d \n", count);

  return 0;
}