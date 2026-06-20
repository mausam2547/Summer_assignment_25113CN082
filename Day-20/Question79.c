#include <stdio.h>

int main()
{
  int a[10][10], rows, cols, i, j, sum;   //a stores matrix elements, rows and cols store matrix size, i and j are loop counters, sum stores row sum

  printf("Enter number of rows and columns: ");
  scanf("%d %d", &rows, &cols);

  //Input matrix elements
  printf("Enter matrix elements:\n");
  for(i = 0; i < rows; i++)
  {
    for(j = 0; j < cols; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }

  //Find row-wise sums
  for(i = 0; i < rows; i++)
  {
    sum = 0;

    for(j = 0; j < cols; j++)
    {
      sum += a[i][j];
    }

    printf("Sum of Row %d = %d\n", i + 1, sum);
  }

  return 0;
}