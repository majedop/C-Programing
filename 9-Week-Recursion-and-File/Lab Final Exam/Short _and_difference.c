#include <stdio.h>
void input_of_array(int A[], int B[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    scanf("%d", &A[i]);

  for (i = 0; i < n; i++)
    scanf("%d", &B[i]);
}

void ascending_Func(int A[], int n)
{
  int i, j;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n - 1; j++)
    {
      if (A[j] > A[j + 1])
      {
        int temp = A[j];
        A[j] = A[j + 1];
        A[j + 1] = temp;
      }
    }
  }
}
void discending_Func(int B[], int n)
{
  int i, j;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n - 1; j++)
    {
      if (B[j] < B[j + 1])
      {
        int temp = B[j];
        B[j] = B[j + 1];
        B[j + 1] = temp;
      }
    }
  }
}

void difference_of_A_B(int A[], int B[], int n)
{
  int D[101];
  for (int i = 0; i < n; i++)
    D[i] = A[i] - B[i];

  for (int i = 0; i < n; i++)
    printf("%d ", D[i]);
}
int main()
{
  int n;
  int A[101], B[101];
  scanf("%d", &n);
  input_of_array(A, B, n);

  ascending_Func(A, n);
  discending_Func(B, n);

  difference_of_A_B(A, B, n);
  
  return 0;
}