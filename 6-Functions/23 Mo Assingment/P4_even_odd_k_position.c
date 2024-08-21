#include <stdio.h>
int main()
{
  int n, k;
  int index=1;
  int ara[200];
  scanf("%d %d", &n, &k);
  
  for (int i = 1; i <=n; i++)
  {
    if (i % 2 == 0)
    {
      ara[index]=i;
      index++;
    }
  }
  for (int i = 1; i <=n; i++)
  {
    if(i%2!=0)
    {
      ara[index]=i;
      index++;
    }
  }
  for (int i = 1; i <=n; i++)
  {
    printf("%d ",ara[i]);
  }
  printf("\n");
  printf("The %dth element in this sequence is %d.",k,ara[k]);

  return 0;
}

