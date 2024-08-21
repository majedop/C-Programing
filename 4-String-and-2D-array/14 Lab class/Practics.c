#include <stdio.h>
#include <string.h>
int main()
{
int row=5,clm=5;
int mtrx[row][clm];
int i,j,x,y;
for(i=0; i<row; i++)
{
  for(j=0; j<clm; j++)
  {
    scanf("%d",&mtrx[i][j]); 
    if(mtrx[i][j]==1)
    {
      x=i;
      y=j;
    }
  }
}
int ans=0;
if(x>2)
x=x-2;
else
x=2-x;

if(y>2)
y=y-2;
else 
y=2-y;

ans=x+y;
printf("%d",ans);
  return 0;
}