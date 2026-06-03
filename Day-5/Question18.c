#include <stdio.h>

int main() 
{

  int num, temp, digit, sum = 0, fact, i;   //num stores input number, temp stores a copy of num, digit stores each digit, sum stores sum of factorials, fact stores factorial of a digit, i is loop counter

  printf("Enter a number: ");
  scanf("%d", &num);

  temp = num;   //Store the original number

  //Extract each digit and calculate its factorial
  while (temp > 0) 
  {
    digit = temp % 10;   //Get the last digit
    fact = 1;   //Initialize factorial as 1

    //Calculate factorial of the digit
    for (i = 1; i <= digit; i++) 
    {
      fact *= i;   //Multiply fact by i
    }

    sum += fact;   //Add the factorial to sum
    temp /= 10;   //Remove the last digit

  }

  //Check whether the sum of factorials is equal to the original number
  if (sum == num) 
  {
    printf("%d is a Strong Number.\n", num);
  } 
  else
  {
    printf("%d is not a Strong Number.\n", num);
  }

  return 0;
}