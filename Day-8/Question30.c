#include <stdio.h>

int main()
{
  int i, j;   //i and j are used in loop

  //Print the character triangle pattern
  for(i = 1; i <= 5; i++)
  {
    for(j = 1; j <= i; j++)
    {
      printf("%d", j);   //Print characters starting from A
    }

    printf("\n");   //Move to the next line
    }

  return 0;
}