#include <stdio.h>

int main()
{
  int arr[100], n, i, even = 0, odd = 0;   //arr stores array elements, n stores array size, i is loop counter, even and odd store the counts

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  //Input array elements
  for(i = 0; i < n; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  //Count even and odd elements
  for(i = 0; i < n; i++)
  {
    if(arr[i] % 2 == 0)
    even++;   //Increase even count
    else
    odd++;   //Increase odd count
  }

  printf("Number of Even Elements = %d\n", even);
  printf("Number of Odd Elements = %d", odd);

  return 0;
}