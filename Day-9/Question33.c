#include<stdio.h>

int main()
{
  int i, j; // i and j are used in loop

  for(i = 5; i >= 1; i--)
  {
    for(j = 1; j <= i; j++)
      {
         printf("*");
      }

    printf("\n");   //Move to the next line
    }

  return 0;
}