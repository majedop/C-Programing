#include <stdio.h>
int main()
{
 /* 1st iteration = 7 9 1 3 12 11 15 62 19 4 73
2nd iteration = 7 1 3 9 11 12 15 19 4 62 73
3rd iteration = 1 3 7 9 11 12 15 4 19 62 73
4th iteration = 1 3 7 9 11 12 4 15 19 62 73
5th iteration = 1 3 7 9 11 4 12 15 19 62 73 */

  int data[]={12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};
  int i,j,n=11,temp;
  for ( i = 0; i < 5; i++)
  {
    temp=0;
    for(j=0; j<n-1; j++)
    {
      if(data[j]>data[j+1])
      {
        temp=data[j];
        data[j]=data[j+1];
        data[j+1]=temp;
      }
    }
  }
  for(i=0; i<n; i++)
  printf("%d ",data[i]);
  

  return 0;
}