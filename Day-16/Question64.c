#include <stdio.h>

int main()
{
  int arr[100], n, i, j, k;   //arr stores array elements, n stores array size, i, j and k are loop counters

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  //Input array elements
  for(i = 0; i < n; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  //Remove duplicate elements
  for(i = 0; i < n; i++)
  {
    for(j = i + 1; j < n; j++)
    {
      if(arr[i] == arr[j])
      {
        for(k = j; k < n - 1; k++)
        {
          arr[k] = arr[k + 1];   //Shift elements left
        }

      n--;   //Reduce array size
      j--;   //Check the current position again
      }
    }
  }

  printf("Array after removing duplicates: ");

  for(i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}