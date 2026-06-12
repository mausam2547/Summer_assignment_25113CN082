#include <stdio.h>

//Function to find the sum of two numbers
int sum(int a, int b)
{
    return a + b;   //Return the sum of a and b
}

int main()
{
  int num1, num2;   //num1 and num2 store the input numbers

  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  printf("Sum = %d", sum(num1, num2));

  return 0;
}