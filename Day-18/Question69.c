#include <stdio.h>

int main()
{
  int arr[100], n, i, j, temp;   //arr stores array elements, n stores array size, i and j are loop counters, temp is used for swapping

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  //Input array elements
  for(i = 0; i < n; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  //Bubble Sort
  for(i = 0; i < n - 1; i++)
  {
    for(j = 0; j < n - i - 1; j++)
    {
      if(arr[j] > arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  printf("Sorted Array: ");

  for(i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}