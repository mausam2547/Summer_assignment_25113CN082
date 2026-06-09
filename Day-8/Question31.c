#include <stdio.h>

int main()
{
  int i, j;   //i and j are used in loop

  //Print the character triangle pattern
  for(i = 0; i <= 5; i++)
  {
    for(j = 0; j < i; j++)
    {
      printf("%c", 'A' + j);   //Print characters starting from A
    }

    printf("\n");   //Move to the next line
    }

  return 0;
}