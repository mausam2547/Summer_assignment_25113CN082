#include <stdio.h>

int main()
{
    int n, d, multiply = 1;   //n store input number, d stores each digit, multiply store the product of digits

    printf("Enter a number: ");
    scanf("%d", &n);

    //Extract each digit and multiply it with product
    while (n > 0)
    {
        d = n % 10;   //Get the last digit of the number
        multiply *= d;   //Multiply the digit with product
        n = n / 10;   //Remove the last digit from the number
    }

    printf("Product of digits = %d", multiply);

    return 0;
}