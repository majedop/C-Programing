#include <stdio.h>
#include <stdbool.h>
void cellPrint(int ar[4][4], int n)
{
  int i,j;
  for ( i = 1; i<=n; i++)
  {
    printf("\n");
    for(j=1; j<=n; j++)
    {
      if(j==1) printf("   ");
      if(ar[i][j]==1) printf("X");
      if(ar[i][j]==2) printf("O");

      if(j<n) printf("\t|\t");
    }
    if(i<n) printf("\n______________________________________\n\n");
  }
}
int is_Win(int ar[][4], int n)
{
  int i,j;
  for(i=1; i<=n; i++)
  {
    if(ar[i][1]==ar[i][2]&& ar[i][2] == ar[i][3] && ar[i][1]!=-1)
    return ar[i][1];
  }
  for(j=1; j<=n; j++)
  {
    if(ar[1][j]==ar[2][j] && ar[2][j]==ar[3][j] && ar[1][j]!=-1)
    return ar[1][j];
  }
  if(ar[1][1]== ar[2][2] && ar[2][2]==ar[3][3] && ar[1][1]!=-1)
  return ar[1][1];

  if(ar[1][3]==ar[2][2] && ar[2][2] == ar[3][1] && ar[1][3]!=-1)
  return ar[1][3];

  return -1;
}
void WinPrint(int ar[4][4], int n, int won)
{
  int i,j;
  for ( i = 1; i<=n; i++)
  {
    printf("\n");
    for(j=1; j<=n; j++)
    {
     if(ar[i][j]==won)
     {
      if(ar[i][j]==1) printf("X");
      else printf("O");
     }
     else
     printf(" ");

      if(j<n) printf("\t|\t");
    }
    if(i<n) printf("\n______________________________________\n\n");
  }
}
int main()
{
  int n,i,j;
  n=3;
  int ar[n+1][n+1];
  for (int i = 1; i <=n; i++)
  {
    for(j=1; j<=n; j++)
    ar[i][j]=-1;
  }
  
  bool player1= true;
  bool player2=true;
  while (true)
  {
    cellPrint(ar,n);
    printf("\n");
    if(player1==true)
    {
      int r,c;
      Flag:
      printf("\nPlayer 1 Turn (X), Enter row & column: ");
      scanf("%d %d",&r,&c);
      if(ar[r][c]!=-1)
      {
        printf("\nInvalid row & column, Try Again.\n\n");
        goto Flag;
      }
      ar[r][c]=1;

      player1 =false;
      player2=true;
    }
    else
    {
      int r,c;
      Flag1:
      printf("\nPlayer 2 Turn (O), Enter row & column: ");
      scanf("%d %d",&r, &c);
      if(ar[r][c]!=-1)
      {
        printf("\nInvalid row & column, Try Again.\n\n");
        goto Flag1;
      }
      ar[r][c]=2;
      player1 = true;
      player2 = false;
    }
     
     if(is_Win(ar,n)==1)
     {
      printf("\n:::::::::::::::::::::\n");
      printf("Player 1 Win!!!\n");
      printf(":::::::::::::::::::::\n\n");

      WinPrint(ar,n,1);
      break;
     }
     if(is_Win(ar,n)==2)
     {
      printf("\n:::::::::::::::::::::\n");
      printf("\nPlayer 2 Win!!\n");
      printf("\n:::::::::::::::::::::\n");
      WinPrint(ar,n,2);
      break;
     }

  }

  return 0;
}