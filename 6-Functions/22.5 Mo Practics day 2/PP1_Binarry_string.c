#include <stdio.h>
int binary_string(char ch[]){
  for (int  i = 0; ch[i]!=NULL; i++)
  {
    if(ch[i]>='A' && ch[i]<='Z')
    return 0;
    if(ch[i]>='a' && ch[i]<='z')
    return 0;
    if(ch[i]>='2' && ch[i]<='9')
    return 0;
  }
  return 1;
}
void solve(int x)
{
  if(x==1)
  printf("YES");
  else
  printf("NO");
}

int main()
{
  char ch[50];
  scanf("%s",ch);
  int ans=binary_string(ch);
  solve(ans);
}