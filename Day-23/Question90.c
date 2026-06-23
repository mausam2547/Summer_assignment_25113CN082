#include <stdio.h>

int main()
{
  char str[100];
  int i, j, count;
  int found = 0;   //str stores the string, i and j are loop counters, count stores frequency, found indicates whether non-repeating character exists

  printf("Enter a string: ");
  scanf("%s", str);

  //Find first non-repeating character
  for(i = 0; str[i] != '\0'; i++)
  {
    count = 0;

    for(j = 0; str[j] != '\0'; j++)
    {
      if(str[i] == str[j])
      {
        count++;
      }
    }

    if(count == 1)
    {
      printf("First Non-Repeating Character = %c", str[i]);
      found = 1;
      break;
    }
  }

  if(found == 0)
  {
    printf("No Non-Repeating Character Found");
  }

  return 0;
}