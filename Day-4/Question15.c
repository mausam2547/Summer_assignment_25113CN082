#include <stdio.h>

int main()
{
    int n, temp, digit, sum = 0;   //n store input number, temp stores a copy of n, digit stores each digit, sum stores the sum of cubes of digits

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;   //Store the original number

    //Extract each digit and calculate the sum of cubes
    while (temp != 0)
    {
        digit = temp % 10;   //Get the last digit of the number
        sum = sum + (digit * digit * digit);   //Add the cube of the digit to sum
        temp = temp / 10;   //Remove the last digit from the number
    }

    //Check whether the number is an Armstrong number
    if (sum == n)
        printf("%d is an Armstrong Number", n);
    else
        printf("%d is not an Armstrong Number", n);

    return 0;
}