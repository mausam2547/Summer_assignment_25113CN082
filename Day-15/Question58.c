#include <stdio.h>

int main()
{
  int arr[100], n, i, first;   //arr stores array elements, n stores array size, i is loop counter, first stores the first element

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  //Input array elements
  for(i = 0; i < n; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  first = arr[0];   //Store the first element

  //Shift all elements one position to the left
  for(i = 0; i < n - 1; i++)
  {
    arr[i] = arr[i + 1];
  }

  arr[n - 1] = first;   //Place the first element at the end

  printf("Array after left rotation: ");

  for(i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}