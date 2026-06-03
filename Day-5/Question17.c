#include <stdio.h>

int main() 
{

  int num, i, sum = 0;   //num stores the input number, i is loop used in loop, sum stores the sum of factors

  printf("Enter a number: ");
  scanf("%d", &num);

  //Find the sum of all factors except the number itself
  for(i = 1; i < num; i++) 
  {
    if(num % i == 0)   //Check if i is a factor of num
      sum += i;   //Add the factor to sum
  }

  //Check whether the sum of factors is equal to the number
  if(sum == num)
  {
    printf("%d is a Perfect Number.\n", num);
  }
  else 
  {
    printf("%d is not a Perfect Number.\n", num);
  }

  return 0;
}