#include<stdio.h>

int main()
{
    int i, n,prime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if ( n <= 1)
    {
        prime = 0;
    }
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        }
    }

    if (prime)
        printf("%d is a Prime Number", n);
    else
        printf("%d is Not a Prime Number", n);

    return 0;
 }