#include <stdio.h>

int main() 
{
  int x, n;   //x stores the base, n stores the power
  long long result = 1;   //result stores the value of x raised to the power n

  printf("Enter base (x): ");
  scanf("%d", &x);

  printf("Enter power (n): ");
  scanf("%d", &n);

  //Multiply x by itself n times
  for (int i = 1; i <= n; i++) 
  {
    result *= x;   //Multiply result by x
  }

  printf("%d^%d = %lld", x, n, result);

  return 0;
}