#include <stdio.h>

int main()
{
  int arr[100], n, i, j = 0;   //arr stores array elements, n stores array size, i is loop counter, j stores the position for non-zero elements

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  //Input array elements
  for(i = 0; i < n; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  //Move non-zero elements to the beginning
  for(i = 0; i < n; i++)
  {
    if(arr[i] != 0)
    {
      arr[j] = arr[i];
      j++;
    }
  }

  //Fill remaining positions with zeros
  while(j < n)
  {
    arr[j] = 0;
    j++;
  }

  printf("Array after moving zeroes to end: ");

  for(i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}