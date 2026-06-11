#include <stdio.h>

int main()
{
  int i, j;   //i and j are used in loop

  //Print the star pyramid pattern
  for(i = 1; i <= 5; i++)
  {
    //Print leading spaces
    for(j = 1; j <= 5 - i; j++)
    {
      printf(" ");
    }

    //Print stars
    for(j = 1; j <= (2 * i - 1); j++)
    {
      printf("*");
    }

    printf("\n");   //Move to the next line
  }

  return 0;
}