#include <stdio.h>

int main()
{
  int a[10][10], n, i, j, symmetric = 1;   //a stores matrix elements, n stores matrix size, i and j are loop counters, symmetric indicates whether matrix is symmetric

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

  //Check symmetry
  for(i = 0; i < n; i++)
  {
    for(j = 0; j < n; j++)
    {
      if(a[i][j] != a[j][i])
      {
        symmetric = 0;
        break;
      }
    }
  }

  if(symmetric)
  printf("Matrix is Symmetric");
  else
  printf("Matrix is Not Symmetric");

  return 0;
}