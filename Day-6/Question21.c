#include <stdio.h>

int main() 
{
  int n, binary[32], i = 0;   //n stores the decimal number, binary array stores binary digits, i is the array index

  printf("Enter a decimal number: ");
  scanf("%d", &n);

  //Handle the special case when the number is 0
  if (n == 0) {
    printf("Binary = 0");
    return 0;
  }

  //Convert decimal number to binary
  while (n > 0) 
  {
    binary[i] = n % 2;   //Store the remainder (0 or 1)
    n = n / 2;   //Divide the number by 2
    i++;   //Move to the next array position
  }

  printf("Binary = ");

  //Print the binary digits in reverse order
  for (int j = i - 1; j >= 0; j--) 
  {
    printf("%d", binary[j]);
  }

  return 0;
}