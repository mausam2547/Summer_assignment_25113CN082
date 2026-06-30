#include <stdio.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
    int issued;
};

int main()
{
    struct Book book[100];
    int n, i, choice, id;
    int found;

    printf("===== Mini Library System =====\n");

    printf("Enter number of books: ");
    scanf("%d", &n);

    // Input book details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &book[i].id);

        printf("Book Name: ");
        scanf("%s", book[i].name);

        printf("Author Name: ");
        scanf("%s", book[i].author);

        book[i].issued = 0;
    }

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Display Books\n");
        printf("2. Search Book\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                printf("\n===== Library Books =====\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nBook ID : %d", book[i].id);
                    printf("\nBook    : %s", book[i].name);
                    printf("\nAuthor  : %s", book[i].author);

                    if(book[i].issued == 0)
                        printf("\nStatus  : Available\n");
                    else
                        printf("\nStatus  : Issued\n");
                }

                break;

            case 2:

                printf("Enter Book ID: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(book[i].id == id)
                    {
                        printf("\nBook Found\n");
                        printf("Book   : %s\n", book[i].name);
                        printf("Author : %s\n", book[i].author);

                        if(book[i].issued == 0)
                            printf("Status : Available\n");
                        else
                            printf("Status : Issued\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book Not Found.\n");

                break;

            case 3:

                printf("Enter Book ID: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(book[i].id == id)
                    {
                        found = 1;

                        if(book[i].issued == 0)
                        {
                            book[i].issued = 1;
                            printf("Book Issued Successfully.\n");
                        }
                        else
                        {
                            printf("Book Already Issued.\n");
                        }

                        break;
                    }
                }

                if(found == 0)
                    printf("Book Not Found.\n");

                break;

            case 4:

                printf("Enter Book ID: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(book[i].id == id)
                    {
                        found = 1;

                        if(book[i].issued == 1)
                        {
                            book[i].issued = 0;
                            printf("Book Returned Successfully.\n");
                        }
                        else
                        {
                            printf("Book is Already Available.\n");
                        }

                        break;
                    }
                }

                if(found == 0)
                    printf("Book Not Found.\n");

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