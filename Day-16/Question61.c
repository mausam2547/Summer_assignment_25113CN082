#include <stdio.h>

int main()
{
  int arr[100], n, i;
  int expectedSum = 0, actualSum = 0, missing;   //expectedSum stores sum of numbers from 1 to n+1, actualSum stores array sum, missing stores the missing number

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
    actualSum += arr[i];
  }

  //Calculate expected sum of numbers from 1 to n+1
  expectedSum = (n + 1) * (n + 2) / 2;

  missing = expectedSum - actualSum;

  printf("Missing Number = %d", missing);

  return 0;
}