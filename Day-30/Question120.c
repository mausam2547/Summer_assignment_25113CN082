#include <stdio.h>
#include <string.h>

#define MAX 100

int roll[MAX];
char name[MAX][50];
int marks[MAX];
int count = 0;

// Function to add a student
void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d", &roll[count]);

    printf("Enter Name: ");
    scanf("%s", name[count]);

    printf("Enter Marks: ");
    scanf("%d", &marks[count]);

    count++;

    printf("Student Added Successfully.\n");
}

// Function to display students
void displayStudents()
{
    int i;

    if(count == 0)
    {
        printf("No Student Records Found.\n");
        return;
    }

    printf("\n===== Student Records =====\n");

    for(i = 0; i < count; i++)
    {
        printf("\nRoll No : %d", roll[i]);
        printf("\nName    : %s", name[i]);
        printf("\nMarks   : %d\n", marks[i]);
    }
}

// Function to search a student
void searchStudent()
{
    int i, searchRoll;
    int found = 0;

    printf("Enter Roll Number: ");
    scanf("%d", &searchRoll);

    for(i = 0; i < count; i++)
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
    {
        printf("Student Not Found.\n");
    }
}

// Function to update marks
void updateMarks()
{
    int i, searchRoll;
    int found = 0;

    printf("Enter Roll Number: ");
    scanf("%d", &searchRoll);

    for(i = 0; i < count; i++)
    {
        if(roll[i] == searchRoll)
        {
            printf("Enter New Marks: ");
            scanf("%d", &marks[i]);

            printf("Marks Updated Successfully.\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Student Not Found.\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Marks\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateMarks();
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}