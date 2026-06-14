#include <stdio.h>

int main()
{
  int arr[100], n, i, key, count = 0;   //arr stores array elements, n stores array size, i is loop counter, key stores the element to search, count stores frequency

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  //Input array elements
  for(i = 0; i < n; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  printf("Enter the element to find frequency: ");
  scanf("%d", &key);

  //Count frequency of the element
  for(i = 0; i < n; i++)
  {
    if(arr[i] == key)
    count++;   //Increase frequency count
  }

  printf("Frequency of %d = %d", key, count);

  return 0;
}