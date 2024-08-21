#include <stdio.h>
int main()
{
  int n,min,m_index;
  scanf("%d",&n);
  int input[n];
  int i,j;
  for ( i = 0; i < n; i++)
  {
    scanf("%d",&input[i]);
  }
  int sorted[n];
 
  for ( i = 0; i < n; i++)
  {
    min=input[0];
    m_index=0;
    for(j=0; j<n; j++)
    {
      if(input[j]<min)
      {
        min=input[j];
        m_index =j;
      }
    }
     sorted[i]=min;
     input[m_index]=9999;
     
  }
  for ( i = 0; i < n; i++)
  {
    printf("%d ",sorted[i]);
  }
  
  
  
  return 0;
}