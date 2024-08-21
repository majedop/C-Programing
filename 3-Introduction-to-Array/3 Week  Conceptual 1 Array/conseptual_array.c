#include <stdio.h>
int main()
{
  //Gives input
  int n;
  scanf("%d",&n);
  int input[n];
  int i;
  for ( i = 0; i < n; i++)
  {
    scanf("%d",&input[i]);
  }
  
  // find largest number from array list
  int largest= input[0];
  for ( i = 0; i < n; i++)
  {
    if (input[i]>largest)
      largest =input[i];
  }

  //largest+1 size ar array tey poti position a 0 set korlam
  int ara[largest+1];
  for ( i = 0; i <=largest; i++)
  {
    ara[i]=0;
  }

  // poti input position a 1 sum korlam
  for ( i = 0; i <n; i++)
  {
    ara[input[i]]+=1;
  }

  int count=0;
  for ( i =largest; i>=1; i--)
  {
    if (ara[i]==1)
      count++;

    if(count==3)
    {printf("The 3rd largest value is: %d", i);
    break;}
  }
  

  return 0;
}