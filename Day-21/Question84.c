#include <stdio.h>

int main()
{
  char str[100];
  int i = 0;   //str stores the string, i is loop counter

  printf("Enter a string: ");
  scanf("%s", str);

  //Convert lowercase letters to uppercase
  while(str[i] != '\0')
  {
    if(str[i] >= 'a' && str[i] <= 'z')
    {
      str[i] = str[i] - 32;
    }

    i++;
  }

  printf("Uppercase String = %s", str);

  return 0;
}