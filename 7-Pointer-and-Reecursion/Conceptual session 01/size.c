#include <stdio.h>
void array_size(int arra[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d ", *(arra++));
  }
}
int main()
{
  int arra[]={50, 20, 30, 60, 10};
  array_size(arra,5);
  }
  