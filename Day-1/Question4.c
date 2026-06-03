#include <stdio.h>

int main() {
    int num, count = 0;   //num store input number, count store number of digits

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle 0 separately
    if (num == 0) {
        count = 1;   //0 has one digit
    }

    // Count digits
    while (num != 0) {
        num = num / 10;   //Remove the last digit
        count++;   //Increase the digit count
    }

    printf("Number of digits = %d", count);

    return 0;
}