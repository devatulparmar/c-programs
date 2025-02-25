// Armstrong.c

#include <stdio.h>
#include <math.h>

// Function to check if a number is Armstrong or not
int isArmstrong(int num) {
    int sum = 0, temp, remainder, digits = 0;

    // Store the number in a temporary variable
    temp = num;

    // Calculate the number of digits in the given number
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = num;

    // Calculate the sum of the powers of the digits
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    // Check if the sum is equal to the original number
    if (sum == num) {
        return 1; // Armstrong number
    } else {
        return 0; // Not an Armstrong number
    }
}

int main() {
    int num;

    // Ask user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is Armstrong
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
