#include <stdio.h>

int main()
{
    int n, d, product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        d = n % 10;     
        product *= d; 
        n = n / 10;
    }

    printf("Product of digits = %d", product);

    return 0;
}