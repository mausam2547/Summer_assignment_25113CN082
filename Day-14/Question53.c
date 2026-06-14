#include <stdio.h>

int main()
{
  int arr[100], n, i, key, found = 0;   //arr stores array elements, n stores array size, i is loop counter, key stores the element to search, found indicates whether element is found

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  //Input array elements
  for(i = 0; i < n; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  printf("Enter element to search: ");
  scanf("%d", &key);

  //Perform linear search
  for(i = 0; i < n; i++)
  {
    if(arr[i] == key)
    {
      found = 1;   //Element found
      printf("Element found at position %d", i + 1);
      break;
    }
  }

  if(found == 0)
  {
    printf("Element not found");
  }

  return 0;
}