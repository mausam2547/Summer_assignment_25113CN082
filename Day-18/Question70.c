#include <stdio.h>

int main()
{
  int arr[100], n, i, j, minIndex, temp;   //arr stores array elements, n stores array size, i and j are loop counters, minIndex stores index of smallest element, temp is used for swapping

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  //Input array elements
  for(i = 0; i < n; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  //Selection Sort
  for(i = 0; i < n - 1; i++)
  {
    minIndex = i;

    for(j = i + 1; j < n; j++)
    {
      if(arr[j] < arr[minIndex])
      {
        minIndex = j;
      }
    }

    temp = arr[i];
    arr[i] = arr[minIndex];
    arr[minIndex] = temp;
  }

  printf("Sorted Array: ");

  for(i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}