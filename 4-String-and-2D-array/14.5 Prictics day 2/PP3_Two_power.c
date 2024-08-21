#include <stdio.h>
#include <string.h>
int main()
{
  char ch[100];
  scanf("%s",ch);
  int i,j,sum=0;
  
  for(i=0; i<strlen(ch); i++)
    sum+=ch[i]-96;
  
  int ans,flag=1;
  for(i=1; i<=sum/2; i++)
  {
    ans=1;
    for(j=1; j<=i; j++)
    {
      ans*=2;
    }
   if(sum==ans)
     {
      printf("Yes\n");
      printf("Cost = 2^%d",i);
      break;
     }
  }
  if (sum!=ans)
  {
    printf("No");
  }
  
  
  
  return 0;
}