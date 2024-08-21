#include <stdio.h>
int main()
{
  int a=10;
  int* p=&a;
  printf("%p\n",p);
  int** q=&p;
  printf("%p\n",q);
  **q=50;
  printf("%d",a);

}