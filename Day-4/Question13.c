#include <stdio.h>

int main()
{

  int n, i, a = 0, b = 1, c;   //n store number of terms, i is loop counter, a and b store Fibonacci terms, c stores the next term

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  printf("Fibonacci Series: ");

  //Generate and print Fibonacci series
  for (i = 1; i <= n; i++)
  {
    printf("%d ", a);   //Print the current Fibonacci term

    c = a + b;   //Calculate the next term
    a = b;   //Move b to a
    b = c;   //Move next term to b
  }

  return 0;
}