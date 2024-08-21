#include <stdio.h>
int strlent(char str[], int size){
  int sizz;
  for (int i = 0; str[i]!=NULL; i++)
  {
   sizz++;
  }
  return sizz;
}
void solve(void)
{
  char str[50];
  scanf("%s",str);
  int ans=strlent(str,50);
  printf("%d\n",ans);
}
int main()
{
  int t;
  scanf("%d",&t);
  while (t--)
  {
    solve();
  }
  
}