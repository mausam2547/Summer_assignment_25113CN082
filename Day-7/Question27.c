#include <stdio.h>

//Function to find sum of digits using recursion
int sumDigits(int n)
{
  if (n == 0)   //Base condition
  return 0;

  return (n % 10) + sumDigits(n / 10);   //Recursive call
}

int main()
{
  int n;   //n stores the input number

  printf("Enter a number: ");
  scanf("%d", &n);

  printf("Sum of digits = %d", sumDigits(n));

  return 0;
}