#include <stdio.h>

int main() {
    int n, sum = 0;   //n stores input number,sum stores the total

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Loop from 1 to n and add each number to sum
    for (int i = 1; i <= n; ++i) {
        sum += i;   // Add the current value of i to sum
    }

    printf("Sum = %d\n", sum);

    return 0;
}