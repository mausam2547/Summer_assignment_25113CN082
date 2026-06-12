#include <stdio.h>

//Function to check whether a number is prime
int Prime(int n)
{
  int i;

  if(n <= 1)
  return 0;   //Numbers less than or equal to 1 are not prime

  for(i = 2; i <= n / 2; i++)
  {
    if(n % i == 0)
    return 0;   //Number is divisible by i, so it is not prime
  }

  return 1;   //Number is prime
}

int main()
{
  int num;   //num stores the input number

  printf("Enter a number: ");
  scanf("%d", &num);

  if(Prime(num))
  printf("%d is a Prime Number", num);
  else
  printf("%d is Not a Prime Number", num);

  return 0;
}