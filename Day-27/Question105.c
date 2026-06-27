#include <stdio.h>

struct Student
{
  int rollNo;
  char name[50];
  float marks;
};

int main()
{
  struct Student s[100];
  int n, i, choice, searchRoll;
  int found;

  printf("===== Student Record Management System =====\n");

  printf("Enter number of students: ");
  scanf("%d", &n);

  // Input student records
  for(i = 0; i < n; i++)
  {
    printf("\nEnter details of Student %d\n", i + 1);

    printf("Roll Number: ");
    scanf("%d", &s[i].rollNo);

    printf("Name: ");
    scanf("%s", s[i].name);

    printf("Marks: ");
    scanf("%f", &s[i].marks);
  }

  do
  {
    printf("\n===== MENU =====\n");
    printf("1. Display All Students\n");
    printf("2. Search Student by Roll Number\n");
    printf("3. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
      case 1:

      printf("\nStudent Records\n");

      for(i = 0; i < n; i++)
      {
        printf("\nRoll No : %d", s[i].rollNo);
        printf("\nName    : %s", s[i].name);
        printf("\nMarks   : %.2f\n", s[i].marks);
      }

      break;

      case 2:

      printf("Enter Roll Number to Search: ");
      scanf("%d", &searchRoll);

      found = 0;

      for(i = 0; i < n; i++)
      {
        if(s[i].rollNo == searchRoll)
        {
          printf("\nStudent Found\n");
          printf("Roll No : %d\n", s[i].rollNo);
          printf("Name    : %s\n", s[i].name);
          printf("Marks   : %.2f\n", s[i].marks);

          found = 1;
          break;
        }
      }

      if(found == 0)
      printf("Student Not Found.\n");
      break;

      case 3:

      printf("Thank You!\n");
      break;

      default:

      printf("Invalid Choice!\n");
    }

  } while(choice != 3);

  return 0;
}