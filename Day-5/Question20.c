#include <stdio.h>

int main() {
  int num, i, j, isPrime, largestPrimeFactor = 0;   //num stores input number, i and j are used in loop, isPrime checks whether a factor is prime, largestPrimeFactor stores the largest prime factor

  printf("Enter a number: ");
  scanf("%d", &num);

  //Check all numbers from 2 to num
  for (i = 2; i <= num; i++)
  {
    //Check if i is a factor of num
    if (num % i == 0) 
    {  //i is a factor

      isPrime = 1;   //Assume the factor is prime

      //Check whether the factor is prime
      for (j = 2; j <= i / 2; j++) 
      {
        if (i % j == 0) 
        {
          isPrime = 0;   //Factor is divisible by j, so it is not prime
          break;   //Exit the loop
        }
      }

      //Store the factor if it is prime
      if (isPrime)
        largestPrimeFactor = i;
    }
  }

  printf("Largest Prime Factor = %d", largestPrimeFactor);

  return 0;
}