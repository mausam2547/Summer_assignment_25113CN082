#include <stdio.h>

int main()
{
  int arr1[100], arr2[100];
  int n1, n2, i, j;   //arr1 and arr2 store input arrays, n1 and n2 store sizes, i and j are loop counters

  printf("Enter the number of elements in first array: ");
  scanf("%d", &n1);

  //Input first array
  for(i = 0; i < n1; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr1[i]);
  }

  printf("Enter the number of elements in second array: ");
  scanf("%d", &n2);

  //Input second array
  for(i = 0; i < n2; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr2[i]);
  }

  printf("Common elements are: ");

  //Find common elements
  for(i = 0; i < n1; i++)
  {
    for(j = 0; j < n2; j++)
    {
      if(arr1[i] == arr2[j])
      {
        printf("%d ", arr1[i]);
        break;
      }
    }
  }

  return 0;
}