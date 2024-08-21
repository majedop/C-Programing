#include <stdio.h>
void func(int ara[], int size, int k)
{
  for (int i = 1; i <=size; i++)
  {
    int temp=0;
    for(int j=1; j<size; j++)
    {
      if(ara[j]>ara[j+1])
      {
        temp=ara[j];
        ara[j]=ara[j+1];
        ara[j+1]=temp;
      }
    }
  }
  printf("%dth largest element = %d\n",k,ara[size-k+1]);
  printf("%dth smallest element = %d\n",k,ara[k]);
  
  
}
int main()
{
  int size,k;
  scanf("%d",&size);
  int ara[size+1];
  for (int i = 1; i <=size; i++)
  scanf("%d",&ara[i]);

  scanf("%d",&k);
  func(ara,size,k);

  
}