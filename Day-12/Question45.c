#include <stdio.h>

//Function to check whether a number is palindrome
int Palindrome(int n)
{
  int og, reverse = 0, digit;   //original stores the number, reverse stores reversed number, digit stores each digit

  og = n;

  while(n > 0)
  {
    digit = n % 10;   //Get the last digit
    reverse = reverse * 10 + digit;   //Build the reversed number
    n = n / 10;   //Remove the last digit
  }

  if(og == reverse)
  return 1;   //Number is palindrome
  else
  return 0;   //Number is not palindrome
}

int main()
{
  int num;   //num stores the input number

  printf("Enter a number: ");
  scanf("%d", &num);

  if(Palindrome(num))
  printf("%d is a Palindrome Number", num);
  else
  printf("%d is Not a Palindrome Number", num);

  return 0;
}