#include <stdio.h>

int main()
{
  char str[100];
  int i = 0, vowels = 0, consonants = 0;   //str stores the string, i is loop counter, vowels and consonants store their counts

  printf("Enter a string: ");
  scanf("%s", str);

  //Count vowels and consonants
  while(str[i] != '\0')
  {
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
    str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
    {
        vowels++;
    }
    else
    {
      consonants++;
    }

    i++;
  }

  printf("Number of Vowels = %d\n", vowels);
  printf("Number of Consonants = %d", consonants);

  return 0;
}