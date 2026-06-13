#include <stdio.h>

int main()
{
  int arr[100], n, i, largest, smallest;   //arr stores array elements, n stores array size, i is loop counter, largest and smallest store the largest and smallest values

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  //Input array elements
  for(i = 0; i < n; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  largest = smallest = arr[0];   //Assume first element is both largest and smallest

  //Find largest and smallest elements
  for(i = 1; i < n; i++)
  {
    if(arr[i] > largest)
    largest = arr[i];   //Update largest element

    if(arr[i] < smallest)
    smallest = arr[i];   //Update smallest element
  }

  printf("Largest Element = %d\n", largest);
  printf("Smallest Element = %d", smallest);

  return 0;
}