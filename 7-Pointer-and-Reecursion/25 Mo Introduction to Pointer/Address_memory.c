#include <stdio.h>
int main()
{
  int ara[]={1,2,3,4,5,6};
  for (int i = 0; i < 6; i++)
  {
    printf("%p\n",&ara[i]);
  }
  
  char ch[]={'n','m','d','s','j'};
  for (int i = 0; ch[i]!=NULL; i++)
  {
    printf("Char %p\n",&ch[i]);
  }
  
}