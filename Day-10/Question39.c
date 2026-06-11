#include <stdio.h>

int main()
{
  int i, j;   //i and j are used in loop

  //Print the number pyramid pattern
  for(i = 1; i <= 5; i++)
  {
    //Print leading spaces
    for(j = 1; j <= 5 - i; j++)
    {
      printf(" ");
    }

    //Print increasing numbers
    for(j = 1; j <= i; j++)
    {
      printf("%d", j);
    }

    //Print decreasing numbers
    for(j = i - 1; j >= 1; j--)
    {
      printf("%d", j);
    }

    printf("\n");   //Move to the next line
  }

  return 0;
}