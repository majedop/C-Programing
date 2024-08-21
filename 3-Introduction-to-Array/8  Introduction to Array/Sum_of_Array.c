#include <stdio.h>

int main()
{
int n[10]={10, 10, 10, 10 , 10,10 ,10 ,10 , 10,10};
 
 int i, sum=0;
 for ( i = 0; i < 10; i++)
 {
  sum= sum+n[i];
 }
 printf("%d",sum);


}