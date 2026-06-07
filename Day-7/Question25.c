#include <stdio.h>

//Function to calculate factorial using recursion
long long factorial(int n)
{
  if (n == 0 || n == 1)   //Base condition
  return 1;

  return n * factorial(n - 1);   //Recursive call
}

int main()
{
  int n;   //n stores the input number

  printf("Enter a number: ");
  scanf("%d", &n);

  if (n < 0)
  {
    printf("Factorial does not exist for negative numbers");
  }
  else
  {
    printf("Factorial of %d is %lld", n, factorial(n));
  }

  return 0;
}