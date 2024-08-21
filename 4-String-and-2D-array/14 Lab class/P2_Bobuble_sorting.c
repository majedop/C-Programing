#include <stdio.h>
int main()
{
  int n;
  scanf("%d ",&n);
  int input[n];
  int i,j;
  for(i=0; i<n; i++)
  {
    scanf("%d",&input[i]);
  }
  
  for(j=0; j<n; j++)
  {
  int temp=0;
  for ( i = 0; i < (n-1); i++)
  {
    if(input[i]>input[i+1])
    {
      temp=input[i];
      input[i]=input[i+1];
      input[i+1]=temp;
    }
    
  }

  }
   for ( i = 0; i < n; i++)
  {
    printf("%d ",input[i]);
  }
  
  
  return 0;
}