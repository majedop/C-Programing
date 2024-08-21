#include <stdio.h>
int swap(int* ptr, int size)
{
  int temp=*ptr;
  *ptr=*(ptr+1);
  *(ptr+1)=temp;
}

void bubble_sort(int* ptr, int size)
{
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j <size-1; j++)
     swap(*ptr,size);
  }
}
int main()
{
  int n;
  scanf("%d",&n);
  int ara[n];
  for (int i = 0; i < n; i++)
   scanf("%d",&ara[i]);
  bubble_sort(&ara,n);

  for (int i = 0; i < n; i++)
  printf("%d",ara[i]);
  
  return 0;
}