#include <stdio.h>

int main() {
  int num, i;   //num stores the input number, i is used to check factors

  printf("Enter a number: ");
  scanf("%d", &num);

  printf("Factors of %d are: ", num);

  //Check all numbers from 1 to num
  for (i = 1; i <= num; i++) 
  {
    //Check if i is a factor of num
    if (num % i == 0) 
      printf("%d ", i);   //Print the factor
    
  }

  return 0;
}