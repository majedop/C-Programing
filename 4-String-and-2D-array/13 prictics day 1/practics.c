#include<stdio.h>
int main()
{
int i,j, R;
scanf("%d",&R);
int x=3,y=3; // প্রশ্নে বলা আছে 3X3 chessboard হবে
int a[x+1][y+1]; // কারন আপনি লুপ ১ থেকে শুরু করেছেন।
for(i=1; i<=x; i++)
{
for(j=1; j<=y; j++)
{
a[i][j]=0;
}
}
int row, col;
for(i=1; i<=R; i++)
{
scanf("%d %d",&row, &col);
a[row][col] = 1;
}
for(i=1; i<=x; i++)
{
for(j=1; j<=y; j++)
{
printf("%d",a[i][j]);
}
printf("\n");
}
return 0;
}