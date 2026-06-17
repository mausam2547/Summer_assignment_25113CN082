#include <stdio.h>

int main()
{
  int arr1[100], arr2[100], unionArr[200];
  int n1, n2, i, j, k = 0, found;   //arr1 and arr2 store input arrays, unionArr stores union elements, n1 and n2 store sizes, i, j are loop counters, k stores union size

  printf("Enter the number of elements in first array: ");
  scanf("%d", &n1);

  //Input first array
  for(i = 0; i < n1; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr1[i]);
  }

  printf("Enter the number of elements in second array: ");
  scanf("%d", &n2);

  //Input second array
  for(i = 0; i < n2; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr2[i]);
  }

  //Copy all elements of first array into union array
  for(i = 0; i < n1; i++)
  {
    unionArr[k] = arr1[i];
    k++;
  }

  //Add only unique elements from second array
  for(i = 0; i < n2; i++)
  {
    found = 0;

    for(j = 0; j < k; j++)
    {
      if(arr2[i] == unionArr[j])
      {
        found = 1;
        break;
      }
    }

    if(found == 0)
    {
      unionArr[k] = arr2[i];
      k++;
    }
  }

  printf("Union of Arrays: ");

  for(i = 0; i < k; i++)
  {
    printf("%d ", unionArr[i]);
  }

  return 0;
}