#include <stdio.h>
int main()
{
  int arra[10]={10,50,20,30,5};
  int* ptr=&arra;
  
  for (int i = 0; i < 5; i++)
  {
    printf("%d ",*ptr);
    printf("%p\n",ptr);
    ptr++;
  }
  

  return 0;
}