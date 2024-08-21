#include <stdio.h>
int find_seven(int n);
int dgsum(int n);
int find_prime(int n);
int main()
{
  int a;
  scanf("%d",&a);
  if(find_seven(a)==1 && dgsum(a)>10 && find_prime(a)==1)
  printf("Farhan Number");
  else
  printf("No");
  return 0;
}

int find_seven(int n){
  while(n>0)
  {
  if(n%10==7)
  return 1;
  n=n/10;
  }
  }
  int dgsum(int n)
  {
    int sum=0;
    while (n>0)
    {
      sum+=n%10;
      n=n/10;
    }
    return sum;
  }
int find_prime(int n)
{
  if(n%10==2 || n%10==3 || n%10==5 ||  n%10==7)
  return 1;
  else
  return 0;
}