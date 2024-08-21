#include <stdio.h>
int main()
{
  int a;
  scanf("%d",a); //Missing Address oparetor
  for ( i = 0; i < n; i++) // i undeclared
  {
    printf("%d",i);
  }

  for (int i = a; i>=a; i++) // Missing Decrement i--
  {
    printf("%d",i);
  }

  if(a=2) // this condition 2 assign in a // missing (==) quality operator 
  {
   printf("%d",a);
  }  
  int i;
  while (i<a)
  {
    printf("%d",i); 
    // Missing Increment i++
  }
  
  return 0;
}