#include <stdio.h>
#include <string.h>

int main()
{
  char str[100], temp[100];
  int choice, i, length, vowels;

  printf("===== Menu-Driven String Operations =====\n");

  printf("Enter a string: ");
  scanf("%s", str);

  do
  {
    printf("\n===== MENU =====\n");
    printf("1. Display String\n");
    printf("2. Find Length\n");
    printf("3. Reverse String\n");
    printf("4. Convert to Uppercase\n");
    printf("5. Count Vowels\n");
    printf("6. Check Palindrome\n");
    printf("7. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
      case 1:

      printf("String = %s\n", str);
      break;

      case 2:

      length = strlen(str);
      printf("Length = %d\n", length);
      break;

      case 3:

      strcpy(temp, str);

      strrev(temp);

      printf("Reverse String = %s\n", temp);
      break;

      case 4:

      strcpy(temp, str);

      for(i = 0; temp[i] != '\0'; i++)
      {
        if(temp[i] >= 'a' && temp[i] <= 'z')
        temp[i] = temp[i] - 32;
      }

      printf("Uppercase String = %s\n", temp);

      break;

      case 5:

      vowels = 0;

      for(i = 0; str[i] != '\0'; i++)
      {
      if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
          str[i]=='o' || str[i]=='u' ||
          str[i]=='A' || str[i]=='E' || str[i]=='I' ||
          str[i]=='O' || str[i]=='U')
        vowels++;
      }

      printf("Number of Vowels = %d\n", vowels);

      break;

      case 6:

      strcpy(temp, str);

      strrev(temp);

      if(strcmp(str, temp) == 0)
      printf("Palindrome String\n");
      else
      printf("Not a Palindrome String\n");

      break;

      case 7:

      printf("Thank You!\n");
      break;

      default:

      printf("Invalid Choice!\n");
    }

  } while(choice != 7);

  return 0;
}