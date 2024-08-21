#include <stdio.h>
int main()
{
  int n,k,i;
  scanf("%d %d",&n,&k);

  int score[51];
  for ( i = 1; i <=n; i++)
  {
    scanf("%d",&score[i]);
  }

  int ans=0;
  for ( i = 1; i <=n; i++)
  {
    if (score[i]>=score[k] && score[i]>0)
      ans++; 
  }
  printf("%d",ans);
  
  return 0;
}