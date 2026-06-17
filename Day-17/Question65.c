#include <stdio.h>

int main()
{
  int arr1[100], arr2[100], arr3[200];
  int n1, n2, i, j = 0;   //arr1 and arr2 store input arrays, arr3 stores merged array, n1 and n2 store sizes, i is loop counter, j stores index of merged array

  printf("Enter the number of elements in first array: ");
  scanf("%d", &n1);

  //Input first array
  for(i = 0; i < n1; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr1[i]);
  }

  printf("Enter the number of elements in secondarray: ");
  scanf("%d", &n2);

  //Input second array
  for(i = 0; i < n2; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr2[i]);
  }

  //Copy first array into merged array
  for(i = 0; i < n1; i++)
  {
      arr3[j] = arr1[i];
      j++;
  }

  //Copy second array into merged array
  for(i = 0; i < n2; i++)
  {
    arr3[j] = arr2[i];
    j++;
  }

  printf("Merged Array: ");

  for(i = 0; i < n1 + n2; i++)
  {
    printf("%d ", arr3[i]);
  }

  return 0;
}