#include <stdio.h>

int main()
{
  int arr[100], n, i, last;   //arr stores array elements, n stores array size, i is loop counter, last stores the last element

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  //Input array elements
  for(i = 0; i < n; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  last = arr[n - 1];   //Store the last element

  //Shift all elements one position to the right
  for(i = n - 1; i > 0; i--)
  {
    arr[i] = arr[i - 1];
  }

  arr[0] = last;   //Place the last element at the beginning

  printf("Array after right rotation: ");

  for(i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}