#include <stdio.h>

int rev = 0;   //Stores the reversed number

//Function to reverse a number using recursion
int reverseNumber(int n)
{
  if (n == 0)   //Base condition
  return rev;

  rev = rev * 10 + (n % 10);   //Add the last digit to the reversed number

  return reverseNumber(n / 10);   //Recursive call
}

int main()
{
  int n;   //n stores the input number

  printf("Enter a number: ");
  scanf("%d", &n);

  printf("Reverse Number = %d", reverseNumber(n));

  return 0;
}