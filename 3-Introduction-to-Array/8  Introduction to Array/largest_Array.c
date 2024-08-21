#include <stdio.h>
int main()
{
  int n;
  int ara[10000];
  scanf("%d",&n);

int i;
for ( i = 0; i < n; i++)
{
  scanf("%d",&ara[i]);
}

int larg;
larg =ara[0];
for ( i = 1; i < n; i++)
{
  if (ara[i]>larg)
  {
    larg=ara[i];
  }
}
printf("The Largest value is : %d",larg);

 return 0;
}