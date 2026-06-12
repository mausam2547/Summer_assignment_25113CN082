#include <stdio.h>

//Function to check whether a number is perfect
int perfect(int n)
{
  int i, sum = 0;   //i is loop counter, sum stores the sum of factors

  for(i = 1; i < n; i++)
  {
    if(n % i == 0)   //Check if i is a factor of n
    sum += i;   //Add the factor to sum
  }

  if(sum == n)
  return 1;   //Number is perfect
  else
  return 0;   //Number is not perfect
}

int main()
{
  int num;   //num stores the input number

  printf("Enter a number: ");
  scanf("%d", &num);

  if(perfect(num))
  printf("%d is a Perfect Number", num);
  else
  printf("%d is not a Perfect Number", num);

  return 0;
}