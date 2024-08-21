#include <stdio.h>
int main()
{
  int n;
  printf("Enter leap Year: ");
  scanf("%d",&n);

  if((n%400==0) || (n%100==0) || (n%4==0))
  printf("%d is leap Year.",n);
  else
  printf("Not leap year.");
 
}