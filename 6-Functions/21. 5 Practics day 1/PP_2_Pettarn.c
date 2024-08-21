#include <stdio.h>
void my_pettern(int a);
int main()
{
  int n;
  scanf("%d",&n);
  my_pettern(n);
  

  return 0;
}
void my_pettern(int a)
{
  int i,j,s;
  for(i=a; i>=1; i--)
  {
    for(s=1; s<=a-i; s++)
    printf(" ");
    
   for(j=1; j<=i*2-1; j++)
   printf("*");
   
   printf("\n");
  }

}