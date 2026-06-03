#include <stdio.h>

int main()
{
    int a, b, temp;   //a and b store the input numbers, temp is used for swapping values
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    //Apply Euclid's algorithm to find the GCD
    while (b != 0)
    {
        temp = b;   //Store the value of b
        b = a % b;   //Store the remainder of a divided by b
        a = temp;   //Update a with the previous value of b
    }

    printf("GCD = %d", a);   //Display the Greatest Common Divisor

    return 0;
}