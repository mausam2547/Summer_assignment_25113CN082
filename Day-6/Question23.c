#include <stdio.h>

int main() 
{
  int n, count = 0;   //n stores the input number, count stores the number of set bits

  printf("Enter a number: ");
  scanf("%d", &n);

  //Check each binary digit of the number
  while (n > 0) 
  {
    if (n % 2 == 1)   //Check if the last binary digit is 1
      count++;   //Increase the set bit count

    n = n / 2;   //Remove the last binary digit
  }

  printf("Number of set bits = %d", count);

  return 0;
}