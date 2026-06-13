#include <stdio.h>

int main()
{
  int arr[100], n, i, sum = 0;   //arr stores array elements, n stores array size, i is loop counter, sum stores total of elements
  float average;   //average stores the average value

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  //Input array elements
  for(i = 0; i < n; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  //Calculate sum of array elements
  for(i = 0; i < n; i++)
  {
    sum += arr[i];   //Add each element to sum
  }

  average = (float)sum / n;   //Calculate average

  printf("Sum = %d\n", sum);
  printf("Average = %.2f", average);

  return 0;
}