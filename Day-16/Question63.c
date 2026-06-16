#include <stdio.h>

int main()
{
  int arr[100], n, i, j, sum, found = 0;   //arr stores array elements, n stores array size, i and j are loop counters, sum stores target sum, found indicates whether a pair is found

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  //Input array elements
  for(i = 0; i < n; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  printf("Enter the required sum: ");
  scanf("%d", &sum);

  //Find pair with given sum
  for(i = 0; i < n; i++)
  {
    for(j = i + 1; j < n; j++)
    {
      if(arr[i] + arr[j] == sum)
      {
        printf("Pair found: %d and %d\n", arr[i], arr[j]);
        found = 1;
      }
    }
  }

  if(found == 0)
  {
    printf("No pair found");
  }

  return 0;
}