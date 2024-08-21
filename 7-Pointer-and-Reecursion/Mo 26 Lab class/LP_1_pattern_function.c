#include <stdio.h>
void hash_print(int n)
{
  for (int i = 1; i <=n; i++)
  {
    printf("*");
  }
  printf("\n");
}
void spach_print(int n)
{
  for (int i = 1; i <=n; i++)
  {
    printf(" ");
  }
  
}
int main()
{
  int n;
  scanf("%d",&n);
  for (int i = n; i>=1; i--)
  {
    spach_print(n-i);
    hash_print(i);
  }
  

  return 0;
}