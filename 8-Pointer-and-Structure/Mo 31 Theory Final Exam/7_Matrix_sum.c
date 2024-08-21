#include <stdio.h>
int main()
{
  int n, m, i, j;
  scanf("%d %d", &n, &m);
  int first_matrix[n][m];
  int second_matrix[n][m];
  int ans[n][m];
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= m; j++)
      scanf("%d", &first_matrix[i][j]);
  }
  printf("\n");
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= m; j++)
      scanf("%d", &second_matrix[i][j]);
  }
  printf("\n");
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= m; j++)
      ans[i][j] = first_matrix[i][j] + second_matrix[i][j];
  }
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= m; j++)
      printf("%d ", ans[i][j]);

    printf("\n");
    return 0;
  }

  return 0;
}