#include <stdio.h>

int main()
{
  char str[100];
  int i = 0, length = 0;   //str stores the string, i is loop counter, length stores string length

  printf("Enter a string: ");
  scanf("%s", str);

  //Count characters until null character is found
  while(str[i] != '\0')
  {
    length++;
    i++;
  }

  printf("Length of string = %d", length);

  return 0;
}