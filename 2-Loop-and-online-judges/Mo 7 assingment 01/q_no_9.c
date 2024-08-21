#include <stdio.h>

int main()
{
//factor
int n,count;
scanf("%d",&n);

printf("The factors of %d are: ",n);

for(count=1; count<n; count++ )
{
  if(n%count==0)
  {
    printf("%d, ",count); 
  }
}
printf("%d.",n);
  return 0;
}