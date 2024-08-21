#include <stdio.h>
void input_func(int n, int m, int Ar[n][m], int Br[n][m]) // input
{
  for (int i = 0; i < n; i++)
  {
   for(int j=0; j<m; j++)
   scanf("%d",&Ar[i][j]);
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    scanf("%d",&Br[i][j]);
  } 
}
void Position_zero(int n, int m, int ans[n][m])
{
  for (int i = 0; i < n; i++)
  {
   for(int j=0; j<m; j++)
   ans[i][j]=0;
  }
}
void Matrix_Multification(int n, int m, int Ar[n][m], int Br[n][m], int ans[n][m])
{
  for (int i = 0; i < n; i++)
  {
   for (int j = 0; j < m; j++)
   {
    ans[i][j]=0;
      for (int k = 0; k < m; k++)
    ans[i][j]+=Ar[i][k]*Br[k][j];
   }
  }
}
void output_func(int n, int m, int ans[n][m])
{
  for (int i = 0; i < n; i++)
  {
   for (int j = 0; j < m; j++)
   printf("%d ",ans[i][j]);

   printf("\n");
  }
  
}

int main()
{
  int n=3,m=3;
  int Ar[n][m];
  int Br[n][m];
  int ans[n][m];
  input_func(n,m,Ar,Br);
  Position_zero(n,m,ans);
  Matrix_Multification(n,m, Ar,Br, ans);
  output_func(n,m,ans);
}