#include <stdio.h>

int main() {
    int num, i;   // num store input number,i is used in loop 
    long long factorial = 1;  //initilize factorial value = 1

    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Factorial does not exist for negative numbers");
    } else {
        // Calculate factorial by multiplying numbers from 1 to num
        for(i = 1; i <= num; i++) {
            factorial *= i;   // Multiply factorial by the current value of i
        }

        printf("Factorial of %d is %lld", num, factorial);
    }

    return 0;
}