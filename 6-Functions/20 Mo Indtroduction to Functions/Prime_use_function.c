#include <stdio.h>
int get_prime(int p) //Function declear
{
  int i;
  if(p==1)
  return 0;
  else if(p==2)
  return 1;
  else{
  for ( i = 2; i < p; i++)
  { 
    if(p%i==0)
    return 0;
  }
  }
  return 1;
}
int main()
{
  int a,ans=0;
  scanf("%d",&a);
 ans= get_prime(a); // Function callll 
 if(ans==1)
 printf("%d is a prime number.",a);
 else
 printf("%d is a composite.",a);
}