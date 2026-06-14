#include <stdio.h>

int main()
{
  int arr[100], n, i, j;   //arr stores array elements, n stores array size, i and j are loop counters

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  //Input array elements
  for(i = 0; i < n; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  printf("Duplicate elements are: ");

  //Find duplicate elements
  for(i = 0; i < n; i++)
  {
    for(j = i + 1; j < n; j++)
    {
      if(arr[i] == arr[j])
      {
        printf("%d ", arr[i]);   //Print duplicate element
        break;
      }
    }
  }

  return 0;
}