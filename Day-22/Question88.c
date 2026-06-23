#include <stdio.h>

int main()
{
  char str[100];
  int i, j = 0;   //str stores the string, i is loop counter, j stores position for non-space characters

  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  //Remove spaces
  for(i = 0; str[i] != '\0'; i++)
  {
    if(str[i] != ' ')
    {
      str[j] = str[i];
      j++;
    }
  }

  str[j] = '\0';

  printf("String after removing spaces = %s", str);

  return 0;
}