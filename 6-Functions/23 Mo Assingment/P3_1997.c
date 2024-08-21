#include <stdio.h>
int func(char ch[])
{
  int freq[10];
  for (int i = 0; i < 10; i++)
  {
    freq[i] = 0;
  }
  for (int i = 0; ch[i]!= NULL; i++)
  {
    freq[ch[i] - '0']++;
  }

  if (freq[1] >= 1 && freq[7] >= 1 && freq[9] >= 1)
    return 1;
  else
    return 0;
}
int main()
{
  char ch[100];
  scanf("%s", ch);
  int ans=func(ch);//Function call

  if(ans==1)
  printf("Yes");
  else
  printf("No");
  return 0;
}