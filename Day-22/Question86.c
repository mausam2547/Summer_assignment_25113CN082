#include <stdio.h>

int main()
{
  char str[100];
  int i = 0, words = 1;   //str stores the sentence, i is loop counter, words stores word count

  printf("Enter a sentence: ");
  fgets(str, sizeof(str), stdin);

  //Count spaces
  while(str[i] != '\0')
  {
    if(str[i] == ' ')
    {
      words++;
    }

    i++;
  }

  printf("Number of Words = %d", words);

  return 0;
}