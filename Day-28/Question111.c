#include <stdio.h>

struct Ticket
{
  int seatNo;
  int booked;
};

int main()
{
  struct Ticket ticket[10];
  int i, choice, seat;

  // Initialize seats
  for(i = 0; i < 10; i++)
  {
    ticket[i].seatNo = i + 1;
    ticket[i].booked = 0;
  }

  do
  {
    printf("\n===== Ticket Booking System =====\n");
    printf("1. View Available Seats\n");
    printf("2. Book Ticket\n");
    printf("3. Cancel Ticket\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
      case 1:

      printf("\nSeat Status\n");

      for(i = 0; i < 10; i++)
      {
        printf("Seat %d : ", ticket[i].seatNo);

        if(ticket[i].booked == 0)
        printf("Available\n");
        else
        printf("Booked\n");
      }

      break;

      case 2:

      printf("Enter Seat Number (1-10): ");
      scanf("%d", &seat);

      if(seat >= 1 && seat <= 10)
      {
        if(ticket[seat - 1].booked == 0)
        {
          ticket[seat - 1].booked = 1;
          printf("Ticket Booked Successfully.\n");
        }
        else
        {
        printf("Seat Already Booked.\n");
        }
      }
      else
      {
        printf("Invalid Seat Number.\n");
      }

      break;

      case 3:

      printf("Enter Seat Number to Cancel: ");
      scanf("%d", &seat);

      if(seat >= 1 && seat <= 10)
      {
        if(ticket[seat - 1].booked == 1)
        {
          ticket[seat - 1].booked = 0;
          printf("Ticket Cancelled Successfully.\n");
        }
        else
        printf("Seat is Already Available.\n");
      }
      else
      printf("Invalid Seat Number.\n");

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