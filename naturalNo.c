// naturalNo.c

#include <stdio.h>

int main() {
    int num;

    // Ask user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is a natural number (positive integer)
    if (num > 0) {
        printf("%d is a natural number.\n", num);
    } else {
        printf("%d is not a natural number.\n", num);
    }

    return 0;
}
