#include <stdio.h>
int find_position()
{
  int n, s;
  scanf("%d", &n);
  int data[n + 1];
  for (int i = 1; i <= n; i++)
    scanf("%d", &data[i]);

  scanf("%d", &s);
  for (int i = 1; i <= n; i++)
  {
    if (s == data[i])
    {
      return i;
    }
  }
  return 0;
}
int main()
{
  int t,i=1;
  scanf("%d", &t);
  while (t--)
  {
    
    int ans = find_position();
    if (ans != 0)
      printf("Case %d : %d\n",i, ans);
    else
      printf("Case %d : Not Found\n",i);
      
     i++;
  }

  return 0;
}