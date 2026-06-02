#include <stdio.h>

int main() {
  int num, i, j, isPrime, largestPrimeFactor = 0;

  printf("Enter a number: ");
  scanf("%d", &num);

  for (i = 2; i <= num; i++)
  {
    if (num % i == 0) 
    {  // i is a factor

      isPrime = 1;

      for (j = 2; j <= i / 2; j++) 
      {
        if (i % j == 0) 
        {
        isPrime = 0;
        break;
        }
      }

      if (isPrime)
        largestPrimeFactor = i;
    }
  }

  printf("Largest Prime Factor = %d", largestPrimeFactor);

    return 0;
}