#include <stdio.h>

int main()
{
int n[8]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

int i;
for ( i = 0; i < 8; i++)
{
  scanf("%d",&n[i]);
}

for ( i = 0; i < 8; i++)
{
  printf("%d ",n[i]);
}
printf("%d ",n[3]);
  return 0;
}