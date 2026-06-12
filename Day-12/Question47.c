#include <stdio.h>

//Function to find the nth Fibonacci term
int fibonacci(int n)
{
  int a = 0, b = 1, c, i;   //a and b store Fibonacci terms, c stores next term, i is loop counter

  if(n == 1)
  return a;   //Return first Fibonacci term

  if(n == 2)
  return b;   //Return second Fibonacci term

  for(i = 3; i <= n; i++)
  {
    c = a + b;   //Calculate next Fibonacci term
    a = b;   //Move b to a
    b = c;   //Move next term to b
  }

  return b;   //Return nth Fibonacci term
}

int main()
{
  int n;   //n stores the term number

  printf("Enter the value of n: ");
  scanf("%d", &n);

  printf("The %dth Fibonacci term is %d", n,fibonacci(n));

  return 0;
}