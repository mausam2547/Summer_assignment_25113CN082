#include <stdio.h>

int main()
{
  char str[100], result[100];
  int i, j, k = 0;
  int duplicate;

  printf("Enter a string: ");
  scanf("%s", str);

  //Remove duplicate characters
  for(i = 0; str[i] != '\0'; i++)
  {
    duplicate = 0;

    for(j = 0; j < k; j++)
    {
      if(str[i] == result[j])
      {
        duplicate = 1;
        break;
      }
    }

    if(!duplicate)
    {
      result[k] = str[i];
      k++;
    }
  }

  result[k] = '\0';

  printf("String after removing duplicates = %s", result);

  return 0;
}