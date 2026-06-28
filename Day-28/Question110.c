#include <stdio.h>

struct Account
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Account acc[100];
    int n, i, choice, searchAcc;
    float amount;
    int found;

    printf("===== Bank Account System =====\n");

    printf("Enter number of accounts: ");
    scanf("%d", &n);

    // Input account details
    for(i = 0; i < n; i++)
    {
      printf("\nEnter details of Account %d\n", i + 1);

      printf("Account Number: ");
      scanf("%d", &acc[i].accNo);

      printf("Account Holder Name: ");
      scanf("%s", acc[i].name);

      printf("Initial Balance: ");
      scanf("%f", &acc[i].balance);
    }

    do
    {
      printf("\n===== MENU =====\n");
      printf("1. Display All Accounts\n");
      printf("2. Search Account\n");
      printf("3. Deposit Money\n");
      printf("4. Withdraw Money\n");
      printf("5. Exit\n");

      printf("Enter your choice: ");
      scanf("%d", &choice);

      switch(choice)
      {
        case 1:

        printf("\nAccount Details\n");

        for(i = 0; i < n; i++)
        {
                    printf("\nAccount No : %d", acc[i].accNo);
                    printf("\nName       : %s", acc[i].name);
                    printf("\nBalance    : %.2f\n", acc[i].balance);
        }

        break;

        case 2:

        printf("Enter Account Number: ");
        scanf("%d", &searchAcc);

        found = 0;

        for(i = 0; i < n; i++)
        {
                    if(acc[i].accNo == searchAcc)
                    {
                        printf("\nAccount Found\n");
                        printf("Account No : %d\n", acc[i].accNo);
                        printf("Name       : %s\n", acc[i].name);
                        printf("Balance    : %.2f\n", acc[i].balance);

                        found = 1;
                        break;
                    }
        }

        if(found == 0)
                    printf("Account Not Found.\n");

        break;

        case 3:

        printf("Enter Account Number: ");
        scanf("%d", &searchAcc);

        found = 0;

        for(i = 0; i < n; i++)
        {
          if(acc[i].accNo == searchAcc)
          {
            found = 1;

            printf("Enter Deposit Amount: ");
            scanf("%f", &amount);

            if(amount > 0)
            {
              acc[i].balance += amount;
              printf("Amount Deposited Successfully.\n");
              printf("Updated Balance = %.2f\n", acc[i].balance);
            }
            else
            printf("Invalid Amount.\n");
            break;
          }
        }

        if(found == 0)
        printf("Account Not Found.\n");

        break;

        case 4:

        printf("Enter Account Number: ");
        scanf("%d", &searchAcc);

        found = 0;

        for(i = 0; i < n; i++)
        {
          if(acc[i].accNo == searchAcc)
          {
            found = 1;

            printf("Enter Withdrawal Amount: ");
            scanf("%f", &amount);

            if(amount > 0 && amount <= acc[i].balance)
            {
              acc[i].balance -= amount;

              printf("Please Collect Your Cash.\n");
              printf("Remaining Balance = %.2f\n", acc[i].balance);
            }
            else
            printf("Insufficient Balance or Invalid Amount.\n");
            break;
          }
        }

        if(found == 0)
        printf("Account Not Found.\n");

        break;

        case 5:

        printf("Thank You for Using the Bank System.\n");
        break;

        default:

        printf("Invalid Choice!\n");
      }

    } while(choice != 5);

  return 0;
}