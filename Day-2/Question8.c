#include <stdio.h>

int main()
{
    int n, og, d, rev = 0;   //n store input number, og store original number, d store each digit, rev store reversed number

    printf("Enter a number: ");
    scanf("%d", &n);

    og = n;   //Store the original number for comparison

    //Reverse the number
    while (n > 0)
    {
        d = n % 10;   //Get the last digit of the number
        rev = rev * 10 + d;   //Add the digit to the reversed number
        n = n / 10;   //Remove the last digit from the number
    }

    //Check whether the original number and reversed number are equal
    if (og == rev)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}