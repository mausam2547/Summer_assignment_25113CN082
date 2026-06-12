#include <stdio.h>

//Function to find factorial of a number
long long factorial(int n)
{
  long long fact = 1;   //fact stores the factorial

  for(int i = 1; i <= n; i++)
  {
    fact *= i;   //Multiply fact by i
  }

  return fact;   //Return the factorial
}

int main()
{
  int num;   //num stores the input number

  printf("Enter a number: ");
  scanf("%d", &num);

  if(num < 0)
  printf("Factorial does not exist for negative numbers");
  else
  printf("Factorial of %d is %lld", num, factorial(num));

  return 0;
}