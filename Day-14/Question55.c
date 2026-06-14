#include <stdio.h>

int main()
{
  int arr[100], n, i, largest, secondLargest;   //arr stores array elements, n stores array size, i is loop counter, largest and secondLargest store the two largest values

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  //Input array elements
  for(i = 0; i < n; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  largest = secondLargest = arr[0];

  //Find largest and second largest elements
  for(i = 1; i < n; i++)
  {
    if(arr[i] > largest)
    {
      secondLargest = largest;
      largest = arr[i];
    }
    else if(arr[i] > secondLargest && arr[i] != largest)
    {
      secondLargest = arr[i];
    }
  }

  printf("Second Largest Element = %d", secondLargest);

  return 0;
}