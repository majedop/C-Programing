#include <stdio.h>
int main()
{
 int t,k;
 scanf("%d",&t);
 for(k=1; k<=t; k++)
 {
  int n,i, max=101;
 scanf("%d",&n);
 int input[n+1];
 for(i=1; i<=n; i++)
 {
  scanf("%d",&input[i]);
 }
 
 int ara[max];
 for(i=1; i<=max; i++)
  {
    ara[i]=0;
  }
  for(i=1; i<=n; i++)
  {
    ara[input[i]]+=1;
  }
   
   int index;
   for(i=1; i<=n; i++)
   {
    if (ara[input[i]]==1)
    {
      index=i;
      break;
    }
   }
   printf("%d\n",index); 
 }
  return 0;
}