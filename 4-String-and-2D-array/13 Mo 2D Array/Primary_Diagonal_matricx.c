#include <stdio.h>
int main()
{
  int row,collm;
  scanf("%d %d",&row,&collm);
  int mrtx[row][collm];
  
   if(row!=collm)
  printf("This matrix not Diagonal\n");

  for(int i=0; i<row; i++)
  {
    for(int j=0; j<collm; j++)
    {
      scanf("%d",&mrtx[i][j]);
    }
  }

   
  if (row==collm)
  {
    int flag=1;
  for (int i = 0; i < row; i++)
  {
    for(int j=0; j<collm; j++)
    {
      if (i==j)
        continue;
      else if(mrtx[i][j]!=0)
      flag=0;
    }
  }
  if (flag==1)
    printf("This is Diagonal Matrix");

  else
  printf("not Diagonal Matrix");
  
  }
  
  
  
  return 0;
}