#include <stdio.h>
int main()
{
  int ara[5];
  int i;

  for (i = 0; i < 5; i++)
  {
    scanf("%d", &ara[i]);
  }

  int max = ara[0];

  for (i = 0; i < 5; i++)
  {
    if (ara[i] > max)
    {
      max=ara[i];
    }
    
  }
  printf("max: %d",max);
}