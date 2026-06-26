#include <stdio.h>

int main()
{
  int choice;
  int pin = 1234, enteredPin;
  float balance = 10000.0, amount;

  printf("===== ATM Simulation =====\n");

  // PIN Verification
  printf("Enter ATM PIN: ");
  scanf("%d", &enteredPin);

  if(enteredPin != pin)
  {
    printf("Invalid PIN! Access Denied.\n");
    return 0;
  }

  do
  {
    printf("\n===== ATM MENU =====\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
      case 1:
      printf("Available Balance = Rs. %.2f\n", balance);
      break;

      case 2:
      printf("Enter amount to deposit: ");
      scanf("%f", &amount);

      if(amount > 0)
      {
        balance += amount;
        printf("Rs. %.2f Deposited Successfully.\n", amount);
        printf("Updated Balance = Rs. %.2f\n", balance);
      }
      else
      {
        printf("Invalid Amount!\n");
      }
      break;

      case 3:
      printf("Enter amount to withdraw: ");
      scanf("%f", &amount);

      if(amount <= balance && amount > 0)
      {
        balance -= amount;
        printf("Please Collect Your Cash.\n");
        printf("Remaining Balance = Rs. %.2f\n", balance);
      }
      else
      {
        printf("Insufficient Balance or Invalid Amount!\n");
      }
      break;

      case 4:
      printf("Thank You for Using Our ATM.\n");
      break;

      default:
      printf("Invalid Choice!\n");
    }

  } while(choice != 4);

  return 0;
}