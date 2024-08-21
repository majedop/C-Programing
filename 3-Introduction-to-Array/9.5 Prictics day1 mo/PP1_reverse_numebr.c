#include <stdio.h>

int main()
{
//Write a C program to take one positive integer N, the size of an array as input. Then take an integer array of size
//N as input and show output in reverse order.
int n;
int ara[20000];

scanf("%d",&n);

int i;
for ( i = 1; i<=n; i++)
{
  scanf("%d",&ara[i]);
}
for ( i = n; i>=1; i--)
{
  printf("%d ",ara[i]);
}


}