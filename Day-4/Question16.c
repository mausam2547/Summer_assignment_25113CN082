#include <stdio.h>

int main()
{

  int start, end, num, temp, digit, sum;   //start and end store the range, num stores the current number, temp stores a copy of num, digit stores each digit, sum stores the sum of cubes of digits

  printf("Enter starting number: ");
  scanf("%d", &start);

  printf("Enter ending number: ");
  scanf("%d", &end);

  printf("Armstrong numbers between %d and %d are:\n", start, end);

  //Check each number in the given range
  for (num = start; num <= end; num++)
  {
    temp = num;   //Store the current number
    sum = 0;   //Reset sum for each number

    //Extract each digit and calculate the sum of cubes
    while (temp != 0)
    {
      digit = temp % 10;   //Get the last digit of the number
      sum = sum + (digit * digit * digit);   //Add the cube of the digit to sum
      temp = temp / 10;   //Remove the last digit from the number
    }

    //Check whether the current number is an Armstrong number
    if (sum == num)
      printf("%d ", num);
  }

  return 0;
}