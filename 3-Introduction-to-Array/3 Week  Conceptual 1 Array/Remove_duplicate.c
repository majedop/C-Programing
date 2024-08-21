#include <stdio.h>
int main()
{
  int n,i,j;
  scanf("%d",&n);
  int input[n];
  for ( i = 0; i < n; i++)
  {
    scanf("%d",&input[i]);
  }

  int uniq_ara[n];
  for ( i= 0; i< n; i++)
  { 
   for(j=i+1; j<n; j++)
   {
    if (input[i]==input[j])
    {
      flag=1;
    }
    if (flag==0)
    {
      uniq_ara[j]=input[i];
    }
   }
   printf("%d",uniq_ara[j]);
  }
  
  
  
  return 0;
}