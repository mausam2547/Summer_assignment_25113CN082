#include<stdio.h>

int main()
{

  int d,i,n,sum=0;
  printf("Enter you number");
  scanf("%d", &n);

  while(n>0)
  {
    d=n%10;
    sum += d;
    n = n/10;

  }
  printf("Sum of digits are:%d", sum);

  return 0;
}