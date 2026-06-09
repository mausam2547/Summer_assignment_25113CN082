#include <stdio.h>

int main()
{
  int i, j;   //i and j are used in loop

  //Print the hollow square pattern
  for(i = 1; i <= 5; i++)
  {
    for(j = 1; j <= 5; j++)
      {
        //Print star on borders, otherwise print space
        if(i == 1 || i == 5 || j == 1 || j == 5)
        printf("*");
        else
        printf(" ");
      }

    printf("\n");   //Move to the next line
  }

    return 0;
}