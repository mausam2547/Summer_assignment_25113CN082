#include <stdio.h>

struct Employee
{
  int empId;
  char name[50];
  float basicSalary;
  float hra;
  float da;
  float grossSalary;
};

int main()
{
  struct Employee emp[100];
  int n, i;

  printf("===== Salary Management System =====\n");

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

  printf("Basic Salary: ");
  scanf("%f", &emp[i].basicSalary);

  // Calculate HRA (20%) and DA (10%)
  emp[i].hra = emp[i].basicSalary * 0.20;
  emp[i].da = emp[i].basicSalary * 0.10;

  // Calculate Gross Salary
  emp[i].grossSalary = emp[i].basicSalary + emp[i].hra + emp[i].da;
  }

  printf("\n===== Salary Report =====\n");

  printf("\nID\tName\tBasic\t\tHRA\t\tDA\t\tGross Salary\n");

  for(i = 0; i < n; i++)
  {
    printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",
    emp[i].empId,
    emp[i].name,
    emp[i].basicSalary,
    emp[i].hra,
    emp[i].da,
    emp[i].grossSalary);
  }

  return 0;
}