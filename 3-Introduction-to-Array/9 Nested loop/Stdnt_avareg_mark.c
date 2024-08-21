#include <stdio.h>
int main()
{
int i,j;
float x, sum=0, avg=0;

for ( i = 1; i <=10; i++)
{
  printf("Enter the marks of %dth students: \n",i);
  for(j=1; j<=3; j++)
  {
    scanf("%f",&x);
   sum=sum+x;
  }
  avg = sum/3;
  printf("%f \n",avg);
  printf("\n");
}

  return 0;
}