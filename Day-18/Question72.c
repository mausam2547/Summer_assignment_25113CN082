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

  //Sort array in descending order
  for(i = 0; i < n - 1; i++)
  {
    for(j = i + 1; j < n; j++)
    {
      if(arr[i] < arr[j])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  printf("Array in Descending Order: ");

  for(i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}