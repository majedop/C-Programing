#include <stdio.h>
int main()
{
  int n,i,j;
  scanf("%d",&n);
  int code[n];
  for ( i = 0; i < n; i++)
  {
    scanf("%d",&code[i]);
  }
  
  
  for ( i = 0; i < n; i++)
  {
    int flag=0;
    for(j=2; j<code[i]/2; j++)
   {
  if (code[i]%j==0)
     {
      flag=1;
     break;
     } 
   }

   if(flag==0)
   {
    printf("Yes\n");
   }
   else
   printf("no\n");
  }
}