#include <stdio.h>
void input_func(int ara[], int size)
{
  for (int i = 0; i < size; i++)
  scanf("%d",&ara[i]);
}
void sorted_func(int ara[], int size)
{
  for (int i = 0; i < size; i++)
  {
    int temp=0;
    for(int j=0; j<(size-1); j++)
    {
      if(ara[j]>ara[j+1])
      {
        temp=ara[j];
        ara[j]=ara[j+1];
        ara[j+1]=temp;
      }
    }
  }
}
void output_func(int ara[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d ",ara[i]);
  }
  
}

int main()
{
  int n;
  scanf("%d",&n);
  int ara[n];
  input_func(ara,n);
  sorted_func(ara,n);
  output_func(ara,n);
}