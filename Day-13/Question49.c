#include <stdio.h>

int main()
{
  int arr[100], n, i;   //arr stores the array elements, n stores array size, i is loop counter

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  //Input array elements
  for(i = 0; i < n; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  //Display array elements
  printf("Array elements are: ");

  for(i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}