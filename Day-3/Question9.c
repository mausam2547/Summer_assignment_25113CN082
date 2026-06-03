#include<stdio.h>

int main()
{
    int i, n,prime = 1;   //i is used in loop, n store input number, prime is use to check whether the number is prime or not

    printf("Enter a number: ");
    scanf("%d", &n);

    //Check if the number is less than or equal to 1
    if ( n <= 1)
    {
        prime = 0;   //Numbers less than or equal to 1 are not prime
    }
    else
    {
        //Check for factors from 2 to n/2
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                prime = 0;   //Number is divivide by i and give remender 0, so it is not prime
                break;   //Exit the loop
            }
        }
    }

    //Display the result
    if (prime)
        printf("%d is a Prime Number", n);
    else
        printf("%d is Not a Prime Number", n);

    return 0;
}