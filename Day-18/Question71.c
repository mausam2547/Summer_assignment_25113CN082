#include <stdio.h>

int main()
{
  int arr[100], n, i, key;
  int low, high, mid, found = 0;   //low and high store search range, mid stores middle index, found indicates whether element is found

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  //Input sorted array elements
  for(i = 0; i < n; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  printf("Enter element to search: ");
  scanf("%d", &key);

  low = 0;
  high = n - 1;

  //Binary Search
  while(low <= high)
  {
    mid = (low + high) / 2;

    if(arr[mid] == key)
    {
      found = 1;
      printf("Element found at position %d", mid + 1);
      break;
    }
    else if(key < arr[mid])
    {
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }

  if(found == 0)
  {
    printf("Element not found");
  }

  return 0;
}