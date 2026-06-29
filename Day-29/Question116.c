#include <stdio.h>

struct Product
{
  int productId;
  char productName[50];
  int quantity;
  float price;
};

int main()
{
  struct Product product[100];
  int n, i, choice, searchId;
  int found;

  printf("===== Inventory Management System =====\n");

  printf("Enter number of products: ");
  scanf("%d", &n);

  // Input product details
  for(i = 0; i < n; i++)
  {
    printf("\nEnter details of Product %d\n", i + 1);
    printf("Product ID: ");
    scanf("%d", &product[i].productId);

    printf("Product Name: ");
    scanf("%s", product[i].productName);

    printf("Quantity: ");
    scanf("%d", &product[i].quantity);

    printf("Price: ");
    scanf("%f", &product[i].price);
  }

  do
  {
    printf("\n===== MENU =====\n");
    printf("1. Display Products\n");
    printf("2. Search Product\n");
    printf("3. Update Quantity\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
      case 1:
      printf("\n===== Product List =====\n");

      for(i = 0; i < n; i++)
      {
        printf("\nProduct ID : %d", product[i].productId);
        printf("\nName       : %s", product[i].productName);
        printf("\nQuantity   : %d", product[i].quantity);
        printf("\nPrice      : %.2f\n", product[i].price);
      }

      break;

      case 2:

      printf("Enter Product ID: ");
      scanf("%d", &searchId);

      found = 0;

      for(i = 0; i < n; i++)
      {
        if(product[i].productId == searchId)
        {
          printf("\nProduct Found\n");
          printf("ID       : %d\n", product[i].productId);
          printf("Name     : %s\n", product[i].productName);
          printf("Quantity : %d\n", product[i].quantity);
          printf("Price    : %.2f\n", product[i].price);

          found = 1;
          break;
        }
      }

      if(found == 0)
      printf("Product Not Found.\n");

      break;

      case 3:

      printf("Enter Product ID: ");
      scanf("%d", &searchId);

      found = 0;

      for(i = 0; i < n; i++)
      {
        if(product[i].productId == searchId)
        {
          found = 1;

          printf("Enter New Quantity: ");
          scanf("%d", &product[i].quantity);

          printf("Quantity Updated Successfully.\n");
          break;
        }
      }

        if(found == 0)
        printf("Product Not Found.\n");

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