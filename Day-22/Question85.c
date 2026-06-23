#include <stdio.h>

int main()
{
  char str[100];
  int i = 0, length = 0, palindrome = 1;   //str stores the string, i is loop counter, length stores string length, palindrome checks whether string is palindrome

  printf("Enter a string: ");
  scanf("%s", str);

  //Find string length
  while(str[length] != '\0')
  {
    length++;
  }

  //Check palindrome
  for(i = 0; i < length / 2; i++)
  {
    if(str[i] != str[length - i - 1])
    {
      palindrome = 0;
      break;
    }
  }

  if(palindrome)
  printf("Palindrome String");
  else
  printf("Not a Palindrome String");

  return 0;
}