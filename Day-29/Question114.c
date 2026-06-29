#include <stdio.h>

int main()
{
  int arr[100];
  int n, i, choice;
  int sum = 0, largest, smallest, key, found;

  printf("===== Menu-Driven Array Operations =====\n");

  printf("Enter the size of array: ");
  scanf("%d", &n);

  printf("Enter %d elements:\n", n);
  for(i = 0; i < n; i++)
  scanf("%d", &arr[i]);

  do
  {
    printf("\n===== MENU =====\n");
    printf("1. Display Array\n");
    printf("2. Find Sum\n");
    printf("3. Find Average\n");
    printf("4. Find Largest Element\n");
    printf("5. Find Smallest Element\n");
    printf("6. Linear Search\n");
    printf("7. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
      case 1:

      printf("Array Elements: ");

      for(i = 0; i < n; i++)
      printf("%d ", arr[i]);

      printf("\n");
      break;

      case 2:

      sum = 0;

      for(i = 0; i < n; i++)
      sum += arr[i];

      printf("Sum = %d\n", sum);

      break;

      case 3:

      sum = 0;

      for(i = 0; i < n; i++)
      sum += arr[i];

      printf("Average = %.2f\n", (float)sum / n);

      break;

      case 4:

      largest = arr[0];

      for(i = 1; i < n; i++)
      {
        if(arr[i] > largest)
        largest = arr[i];
      }

      printf("Largest Element = %d\n", largest);

      break;

      case 5:

      smallest = arr[0];

      for(i = 1; i < n; i++)
      {
        if(arr[i] < smallest)
        smallest = arr[i];
      }

      printf("Smallest Element = %d\n", smallest);

      break;

      case 6:

      printf("Enter element to search: ");
      scanf("%d", &key);

      found = 0;

      for(i = 0; i < n; i++)
      {
        if(arr[i] == key)
        {
          printf("Element Found at Position %d\n", i + 1);
          found = 1;
          break;
        }
      }

      if(found == 0)
      printf("Element Not Found\n");

      break;

      case 7:

      printf("Thank You!\n");
      break;

      default:

      printf("Invalid Choice!\n");
    }

  } while(choice != 7);

  return 0;
}