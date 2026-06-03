#include<stdio.h>

int main()
{

  int d, i, n, sum = 0;   //d store digit, n store input number, sum store the sum of digits

  printf("Enter you number");
  scanf("%d", &n);

  //Extract each digit and add it to sum
  while(n > 0)
  {
    d = n % 10;   //Get the last digit of the number
    sum += d;   //Add the digit to sum
    n = n / 10;   //Remove the last digit from the number
  }

  printf("Sum of digits are:%d", sum);

  return 0;
}