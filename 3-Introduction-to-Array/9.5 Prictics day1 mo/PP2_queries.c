#include <stdio.h>

int main()
{
  //1st input
int n;
scanf("%d",&n);

int ara[100];
int i;

for ( i = 0; i < n; i++)
{
  scanf("%d",&ara[i]);
}
printf("\n");
int q;
scanf("%d",&q);

for ( i = 0; i < q; i++)
{
  int index,value;
  scanf("%d %d",&index, &value);
  ara[index]+=value;
}
for ( i = 0; i < n; i++)
{
  printf("%d ",ara[i]);
}

  return 0;
}