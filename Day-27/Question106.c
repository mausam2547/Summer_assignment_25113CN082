#include <stdio.h>

struct Employee
{
  int empId;
  char name[50];
  float salary;
};

int main()
{
  struct Employee emp[100];
  int n, i, choice, searchId;
  int found;

  printf("===== Employee Management System =====\n");

  printf("Enter number of employees: ");
  scanf("%d", &n);

  // Input employee details
  for(i = 0; i < n; i++)
  {
    printf("\nEnter details of Employee %d\n", i + 1);

    printf("Employee ID: ");
    scanf("%d", &emp[i].empId);

    printf("Name: ");
    scanf("%s", emp[i].name);

    printf("Salary: ");
    scanf("%f", &emp[i].salary);
  }

  do
  {
    printf("\n===== MENU =====\n");
    printf("1. Display All Employees\n");
    printf("2. Search Employee by ID\n");
    printf("3. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
      case 1:

      printf("\nEmployee Records\n");

      for(i = 0; i < n; i++)
      {
        printf("\nEmployee ID : %d", emp[i].empId);
        printf("\nName        : %s", emp[i].name);
        printf("\nSalary      : %.2f\n", emp[i].salary);
      }

      break;

      case 2:

      printf("Enter Employee ID to Search: ");
      scanf("%d", &searchId);

      found = 0;

      for(i = 0; i < n; i++)
      {
        if(emp[i].empId == searchId)
        {
          printf("\nEmployee Found\n");
          printf("Employee ID : %d\n", emp[i].empId);
          printf("Name        : %s\n", emp[i].name);
          printf("Salary      : %.2f\n", emp[i].salary);

          found = 1;
          break;
        }
      }

      if(found == 0)
      printf("Employee Not Found.\n");

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