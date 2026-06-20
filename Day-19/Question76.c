#include <stdio.h>

int main()
{
  int a[10][10], n, i, j, sum = 0;   //a stores the matrix, n stores matrix size, i and j are loop counters, sum stores diagonal sum

  printf("Enter the order of square matrix: ");
  scanf("%d", &n);

  //Input matrix elements
  printf("Enter matrix elements:\n");
  for(i = 0; i < n; i++)
  {
    for(j = 0; j < n; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }

  //Find sum of principal diagonal elements
  for(i = 0; i < n; i++)
  {
    sum += a[i][i];
  }

  printf("Diagonal Sum = %d", sum);

  return 0;
}