#include <stdio.h>

int main()
{
  int arr[100], n, i;   //arr stores array elements, n stores array size, i is loop counter

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  //Input array elements
  for(i = 0; i < n; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  printf("Reversed array: ");

  //Display array in reverse order
  for(i = n - 1; i >= 0; i--)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}