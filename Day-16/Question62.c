#include <stdio.h>

int main()
{
  int arr[100], n, i, j;
  int maxCount = 0, count, maxElement;   //maxCount stores highest frequency, count stores current frequency, maxElement stores the element with maximum frequency

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  //Input array elements
  for(i = 0; i < n; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  //Find maximum frequency element
  for(i = 0; i < n; i++)
  {
    count = 0;

    for(j = 0; j < n; j++)
    {
      if(arr[i] == arr[j])
      {
        count++;   //Count occurrences of arr[i]
      }
    }

    if(count > maxCount)
    {
      maxCount = count;
      maxElement = arr[i];
    }
  }

  printf("Maximum Frequency Element = %d\n", maxElement);
  printf("Frequency = %d", maxCount);

  return 0;
}