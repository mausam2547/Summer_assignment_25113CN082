#include <stdio.h>

int main()
{
  char str[200], longest[100];
  int i = 0, j = 0;
  int maxLen = 0, currentLen = 0, start = 0, maxStart = 0;

  printf("Enter a sentence: ");
  fgets(str, sizeof(str), stdin);

  //Find longest word
  while(str[i] != '\0')
  {
    if(str[i] != ' ' && str[i] != '\n')
    {
      currentLen++;
    }
    else
    {
      if(currentLen > maxLen)
      {
        maxLen = currentLen;
        maxStart = start;
      }

      currentLen = 0;
      start = i + 1;
    }

    i++;
  }

  //Check last word
  if(currentLen > maxLen)
  {
    maxLen = currentLen;
    maxStart = start;
  }

  //Copy longest word
  for(i = 0; i < maxLen; i++)
  {
    longest[i] = str[maxStart + i];
  }

  longest[maxLen] = '\0';

  printf("Longest Word = %s\n", longest);
  printf("Length = %d", maxLen);

  return 0;
}