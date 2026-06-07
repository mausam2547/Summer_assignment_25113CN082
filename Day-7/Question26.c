#include <stdio.h>

//Function to find Fibonacci term using recursion
int fibonacci(int n)
{
  if (n == 1)   //Base condition for 1st term
    return 0;

  if (n == 2)   //Base condition for 2nd term
    return 1;

  return fibonacci(n - 1) + fibonacci(n - 2);   //Recursive call
}

int main()
{
  int n;   //n stores the term number

  printf("Enter the value of n: ");
  scanf("%d", &n);

  printf("The %dth Fibonacci term is %d", n, fibonacci(n));

  return 0;
}