#include <stdio.h>

int main() {
    int num, i;   // num stores input number,i is used in loop

    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop from 1 to 10 to generate the multiplication table
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}