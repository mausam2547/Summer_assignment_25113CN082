#include <stdio.h>

int main()
{
  char str[100], ch;
  int i = 0, count = 0;   //str stores the string, ch stores the character to search, i is loop counter, count stores frequency

  printf("Enter a string: ");
  scanf("%s", str);

  printf("Enter a character: ");
  scanf(" %c", &ch);

  //Count frequency of character
  while(str[i] != '\0')
  {
    if(str[i] == ch)
    {
      count++;
    }

    i++;
  }

  printf("Frequency of '%c' = %d", ch, count);

  return 0;
}