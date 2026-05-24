#include <stdio.h>

int main() {
    int num, i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial does not exist for negative numbers");
    } else {
        for(i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("Factorial of %d is %lld", num, factorial);
    }

    return 0;
}