#include <stdio.h>

int main()
{

  int n, i, a = 0, b = 1, c;   //n store the term number, i is used in loop, a and b store Fibonacci terms, c stores the next term

  printf("Enter the value of n: ");
  scanf("%d", &n);

  //Check if the required term is the 1st Fibonacci term
  if (n == 1)
  printf("The %dst Fibonacci term is %d", n, a);

  //Check if the required term is the 2nd Fibonacci term
  else if (n == 2)
  printf("The %dnd Fibonacci term is %d", n, b);

  //Find the nth Fibonacci term for n greater than 2
  else
  {
    for (i = 3; i <= n; i++)
      {
        c = a + b;   //Calculate the next Fibonacci term
        a = b;   //Move b to a
        b = c;   //Move next term to b
      }

      printf("The %dth Fibonacci term is %d", n, b);
  }

  return 0;
}