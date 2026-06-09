#include <stdio.h>

int main()
{
  int i, j;   //i and j are used in loop

  //Print the repeated-number pattern
  for(i = 1; i <= 5; i++)
  {
    for(j = 1; j <= i; j++)
    {
      printf("%d", i);   //Print the current row number
    }

    printf("\n");   //Move to the next line
  }

  return 0;
}