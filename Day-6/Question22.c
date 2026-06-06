#include <stdio.h>

int main() 
{
  long long binary;   //binary stores the binary number entered by the user
  int decimal = 0, base = 1, rem;   //decimal stores the decimal value, base stores powers of 2, rem stores each binary digit

  printf("Enter a binary number: ");
  scanf("%lld", &binary);

  //Convert binary number to decimal
  while (binary > 0) 
  {
    rem = binary % 10;   //Get the last binary digit
    decimal += rem * base;   //Add the digit multiplied by its place value
    base *= 2;   //Move to the next power of 2
    binary /= 10;   //Remove the last binary digit
  }

  printf("Decimal = %d", decimal);

  return 0;
}