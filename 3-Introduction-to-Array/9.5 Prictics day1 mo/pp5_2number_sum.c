#include <stdio.h>
int main()
{
  int n,k, count=1;
  scanf("%d",&n);
  int input[n];
  int i,j;
  for ( i = 0; i <n; i++)
  {
    scanf("%d",&input[i]);
  }
  
  scanf("%d",&k);

  for ( i = 0; i <n; i++)
  {
    for(j=0; j<n; j++)
    {
      if(input[i]+input[j]==k && i!=j)
      {
          count=0;
          break;
      }
    }
  }
  if (count==0)
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }

  return 0;
}