#include <stdio.h>
int main()
{
  int n,i;
  scanf("%d",&n);
  int data[n];
  for ( i = 0; i < n; i++)
  {
    scanf("%d",&data[i]);
  }
  int larg=data[0];
  for(i=0; i<n; i++)
  {
    if (data[i]>larg)
    {
      larg=data[i];
    }
  }
  int arr[larg+1];
  for(i=0; i<=larg; i++)
  {
    arr[i]=0;
  }
  for ( i = 0; i <n; i++)
  {
    arr[data[i]]+=1;
  }
  
  int dup=0, uni=0;
  for ( i = 1; i <=larg ; i++)
  {
    if (arr[i]==1)
    {
      uni++;
    }
    else if(arr[i]>1)
    {
      dup++;
    }
  }
  printf("UNIq: %d",uni);
  printf("Duplitact: %d",dup);
  
  
  

  return 0;
}