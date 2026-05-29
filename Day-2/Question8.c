#include <stdio.h>

int main()
{
    int n, og, d, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    og = n;

    while (n > 0)
    {
        d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }

    if (og == rev)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}