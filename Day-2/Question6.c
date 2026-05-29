#include<stdio.h>

int main()
{
  int n,rev=0,d;

  printf("Enter your number:");
  scanf("%d", &n);

  while(n>0)
  {
    d= n%10;
    rev = rev * 10 + d;
    n = n /10;
  }

  printf("Reverse of the no is %d", rev);

  return 0;
}