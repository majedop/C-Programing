#include <stdio.h>
int main()
{
 int n;
 int ara[20];
 int i;

 printf("Enter the number: ");
 scanf("%d",&n);

 for ( i = 0; i < n; i++)
 {
  scanf("%d",&ara[i]);
 }

int even_c=0;
int odd_c=0;

 for ( i = 0; i < n; i++)
 {
  if (ara[i]%2==0)
  {
    even_c++;
  }
  else{
    odd_c++;
  }  
 }
 printf("Totale number of evens: %d \n",even_c);
 printf("Totale number odds: %d",odd_c);
 

}