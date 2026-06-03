#include<stdio.h>

int main()
{
  int n, rev=0, d;   //n store input number, rev store reversed number, d stores each digit

  printf("Enter your number:");
  scanf("%d", &n);

  //Extract digits and build the reversed number
  while(n>0)
  {
    d= n%10;   //Get the last digit of the number
    rev = rev * 10 + d;   //Add the digit to the reversed number
    n = n /10;   //Remove the last digit from the number
  }

  printf("Reverse of the no is %d", rev);

  return 0;
}