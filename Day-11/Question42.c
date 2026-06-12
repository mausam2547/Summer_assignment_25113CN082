#include <stdio.h>

//Function to find the maximum of two numbers
int maximum(int a, int b)
{
  if(a > b)
  return a;   //Return a if it is greater
  else
  return b;   //Return b if it is greater
}

int main()
{
  int num1, num2;   //num1 and num2 store the input numbers

  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  printf("Maximum = %d", maximum(num1, num2));

  return 0;
}