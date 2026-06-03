#include <stdio.h>

int main()
{
    int start, end, i, j, prime;   //start and end store the range, i and j used in loop, prime is used to check whether a number is prime or not

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    //Check each number in the given range
    for (i = start; i <= end; i++)
    {
        //Skip numbers less than or equal to 1
        if (i <= 1)
            continue;

        prime = 1;   //Assume the number is prime

        //Check if the current number has any factors
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                prime = 0;   //Number is divisible by j, so it is not prime
                break;   //Exit the loop
            }
        }

        //Print the number if it is prime
        if (prime)
            printf("%d ", i);
    }

    return 0;
}