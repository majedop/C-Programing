#include <stdio.h>
#include<stdlib.h>
int main()
{
  int n;
  scanf("%d",&n);
  double* ptr;
  ptr = (double*) calloc(n, sizeof(double));

  for (int i = 0; i < n; i++)
    scanf("%lf",(ptr+i));

  for (int i = 0; i < n; i++)
   printf("%2.63lf ",*(ptr+i));
  free(ptr);
  return 0;
  
}