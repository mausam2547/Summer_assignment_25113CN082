#include <stdio.h>

int main()
{
  char str[100], temp;
  int i, length = 0;   //str stores the string, temp is used for swapping, i is loop counter, length stores string length

  printf("Enter a string: ");
  scanf("%s", str);

  //Find string length
  while(str[length] != '\0')
  {
    length++;
  }

  //Reverse the string
  for(i = 0; i < length / 2; i++)
  {
    temp = str[i];
    str[i] = str[length - i - 1];
    str[length - i - 1] = temp;
  }

  printf("Reversed String = %s", str);

  return 0;
}