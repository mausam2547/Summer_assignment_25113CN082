#include <stdio.h>

int main()
{
    int a, b, max;   //a and b store the input numbers, max store the current value being checked for LCM

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;   //Assign the larger number to max

    //Keep checking numbers until the LCM is found
    while (1)
    {
        //Check if max is divisible by both a and b
        if (max % a == 0 && max % b == 0)
        {
            printf("LCM = %d", max);   //Display the Least Common Multiple
            break;   //Exit the loop when LCM is found
        }
        max++;   //Move to the next number
    }

    return 0;
}