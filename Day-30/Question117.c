#include <stdio.h>
#include <string.h>

int main()
{
  int roll[100], marks[100];
  char name[100][50];
  int n, i, choice, searchRoll;
  int found;

  printf("===== Student Record System =====\n");

  printf("Enter number of students: ");
  scanf("%d", &n);

  // Input student records
  for(i = 0; i < n; i++)
  {
    printf("\nEnter details of Student %d\n", i + 1);

    printf("Roll Number: ");
    scanf("%d", &roll[i]);

    printf("Name: ");
    scanf("%s", name[i]);

    printf("Marks: ");
    scanf("%d", &marks[i]);
  }

  do
  {
    printf("\n===== MENU =====\n");
    printf("1. Display All Students\n");
    printf("2. Search Student by Roll Number\n");
    printf("3. Search Student by Name\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
      case 1:

      printf("\n===== Student Records =====\n");

      for(i = 0; i < n; i++)
      {
        printf("\nRoll No : %d", roll[i]);
        printf("\nName    : %s", name[i]);
        printf("\nMarks   : %d\n", marks[i]);
      }

      break;

      case 2:

      printf("Enter Roll Number: ");
      scanf("%d", &searchRoll);

      found = 0;

      for(i = 0; i < n; i++)
      {
        if(roll[i] == searchRoll)
        {
          printf("\nStudent Found\n");
          printf("Roll No : %d\n", roll[i]);
          printf("Name    : %s\n", name[i]);
          printf("Marks   : %d\n", marks[i]);

          found = 1;
          break;
        }
      }

      if(found == 0)
      printf("Student Not Found.\n");

      break;

      case 3:

      {
        char searchName[50];

        printf("Enter Name: ");
        scanf("%s", searchName);

        found = 0;

        for(i = 0; i < n; i++)
        {
          if(strcmp(name[i], searchName) == 0)
          {
            printf("\nStudent Found\n");
            printf("Roll No : %d\n", roll[i]);
            printf("Name    : %s\n", name[i]);
            printf("Marks   : %d\n", marks[i]);

            found = 1;
            break;
          }
        }

        if(found == 0)
        printf("Student Not Found.\n");
      }

      break;

      case 4:

      printf("Thank You!\n");
      break;

      default:

      printf("Invalid Choice!\n");
    }

  } while(choice != 4);

  return 0;
}