#include <stdio.h>

int main()
{
  int arr1[100], arr2[100], merge[200];
  int n1, n2, i, j, k;   //arr1 and arr2 store input arrays, merge stores merged array, n1 and n2 store sizes, i, j, k are indices

  printf("Enter size of first sorted array: ");
  scanf("%d", &n1);

  printf("Enter elements of first sorted array:\n");
  for(i = 0; i < n1; i++)
  {
    scanf("%d", &arr1[i]);
  }

  printf("Enter size of second sorted array: ");
  scanf("%d", &n2);

  printf("Enter elements of second sorted array:\n");
  for(i = 0; i < n2; i++)
  {
    scanf("%d", &arr2[i]);
  }

  i = 0;
  j = 0;
  k = 0;

  //Merge both arrays
  while(i < n1 && j < n2)
  {
    if(arr1[i] < arr2[j])
    {
      merge[k] = arr1[i];
      i++;
    }
    else
    {
      merge[k] = arr2[j];
      j++;
    }
    k++;
  }

  //Copy remaining elements of first array
  while(i < n1)
  {
    merge[k] = arr1[i];
    i++;
    k++;
  }

  //Copy remaining elements of second array
  while(j < n2)
  {
    merge[k] = arr2[j];
    j++;
    k++;
  }

  printf("Merged Sorted Array: ");

  for(i = 0; i < k; i++)
  {
    printf("%d ", merge[i]);
  }

  return 0;
}