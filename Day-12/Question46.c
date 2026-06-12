#include <stdio.h>

//Function to check whether a number is Armstrong
int Armstrong(int n)
{
  int temp, digit, sum = 0;   //temp stores a copy of n, digit stores each digit, sum stores the sum of cubes

  temp = n;

  while(temp != 0)
  {
    digit = temp % 10;   //Get the last digit
    sum = sum + (digit * digit * digit);   //Add the cube of the digit
    temp = temp / 10;   //Remove the last digit
  }

  if(sum == n)
  return 1;   //Number is Armstrong
  else
  return 0;   //Number is not Armstrong
}

int main()
{
  int num;   //num stores the input number

  printf("Enter a number: ");
  scanf("%d", &num);

  if(Armstrong(num))
  printf("%d is an Armstrong Number", num);
  else
  printf("%d is not an Armstrong Number", num);

  return 0;
}